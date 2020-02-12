#include "../headerFiles/templating.h"

int handleParseIncludeStatement(string* includeStr, char** result) {
  includeStatement statement;
  int worked = parseIncludeStatement(includeStr, &statement);
  if (worked != 0) {
    free(statement.filePath);

    return -1;
  }

  char* data;
  int size = readRawFile(statement.filePath, &data);
  if (size < 0) {
    free(statement.filePath);
    free(data);

    return -1;
  }
  free(statement.filePath);

  *result = data;

  return size;
}

int parseTemplate(char* rawContent, int rawContentLength, char** result) {
  int contentLength = rawContentLength;
  char* content = rawContent;

  if (contentLength <= 0)
    return -1;

  if (content == NULL)
    return -1;

  int includeStart = findCharArr(content, "<--include", contentLength, 10);
  while (includeStart != -1) {
    int includeInnerStart = includeStart + 10;
    int includeEnd = findCharArrAfter(content, "/>", contentLength, 2, includeStart);
    includeEnd += 2;

    int includeStrLength = (includeEnd - includeStart);
    string includeStr = {
      content: content + includeStart,
      length: includeStrLength,
    };

    char* data;
    int dataSize = handleParseIncludeStatement(&includeStr, &data);
    char* nContent;
    if (dataSize < 0) {
      replaceStr(content, "", includeStart, (includeEnd - includeStart), &nContent, &contentLength);
    } else {
      replaceStr(content, data, includeStart, (includeEnd - includeStart), &nContent, &contentLength);
      free(data);
    }
    free(content);
    content = nContent;


    includeStart = findCharArr(content, "<--include", contentLength, 10);
  }

  (*result) = content;

  return contentLength;
}
