#include "../headerFiles/templating.h"

#define INCLUDESTARTLENGTH 10
#define INCLUDEENDLENGTH 2

int handleParseIncludeStatement(string includeStr, char** result) {
  includeStatement statement;
  int worked = parseIncludeStatement(includeStr, &statement);
  if (worked != 0) {
    return 0;
  }

  char* data;
  int size = readRawFile(statement.filePath, &data);
  free(statement.filePath);
  if (size < 0) {
    free(data);

    return 0;
  }

  *result = data;

  return size;
}

// TODO:
// Reduce the amount of calls to malloc, like a lot
// Use the KV-List to store each part (before and after each include + the text to include)
// then at the end malloc new block once and copy it all into that one
int parseTemplate(char* rawContent, int rawContentLength, char** result) {
  int contentLength = rawContentLength;
  char* content = rawContent;

  if (contentLength <= 0 || content == NULL)
    return -1;

  int includeStart = findCharArr(content, "<--include", contentLength, INCLUDESTARTLENGTH);
  while (includeStart != -1) {
    int includeInnerStart = includeStart + INCLUDESTARTLENGTH;
    int includeEnd = findCharArrAfter(content, "/>", contentLength, INCLUDEENDLENGTH, includeStart);
    includeEnd += 2;

    int includeStrLength = (includeEnd - includeStart);
    string includeStr = {
      .content = content + includeStart,
      .length = includeStrLength,
    };

    char* data;
    int dataSize = handleParseIncludeStatement(includeStr, &data);
    char* nContent;
    string contentStr = {
      .content = content,
      .length = contentLength,
    };
    string replacementStr = {
      .content = data,
      .length = dataSize,
    };
    replaceStr(&contentStr, &replacementStr, includeStart, (includeEnd - includeStart), &nContent, &contentLength);
    if (dataSize > 0) {
      free(data);
    }
    free(content);
    content = nContent;


    includeStart = findCharArrAfter(content, "<--include", contentLength, INCLUDESTARTLENGTH, includeStart);
  }

  (*result) = content;

  return contentLength;
}
