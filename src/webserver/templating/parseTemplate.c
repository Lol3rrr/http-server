#include "../headerFiles/templating.h"

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
    string* includeStr = getSubstring(content, includeStart, includeStrLength);

    includeStatement* statement;
    parseIncludeStatement(includeStr, &statement);

    free(includeStr->content);
    free(includeStr);

    char* data;
    int size = readRawFile(statement->filePath, &data);
    if (size < 0) {
      free(data);

      logError("[parseTemplate] Could not include the file '%s' \n", statement->filePath);

      data = createEmptyCString(0);
    }

    string* nString = replaceStr(content, data, includeStart, (includeEnd - includeStart));
    contentLength = nString->length;
    free(content);
    content = nString->content;
    free(nString);

    free(statement->filePath);
    free(statement);
    free(data);

    includeStart = findCharArr(content, "<--include", contentLength, 10);
  }

  (*result) = content;

  return contentLength;
}
