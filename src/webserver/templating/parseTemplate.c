#include "../headerFiles/templating.h"

int parseTemplate(char* rawContent, int rawContentLength, char** result) {
  int contentLength = rawContentLength;
  char* content = rawContent;

  if (contentLength <= 0)
    return -1;

  if (content == NULL)
    return -1;

  int includeStart = findStr(content, "<--include", contentLength, 10);
  while (includeStart != -1) {
    int includeInnerStart = includeStart + 10;
    int includeEnd = findStrAfter(content, "/>", contentLength, 2, includeStart);
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

    char* tmp;
    contentLength = replaceStr(content, data, includeStart, (includeEnd - includeStart), &tmp);
    free(content);
    content = tmp;

    free(statement->filePath);
    free(statement);
    free(data);

    includeStart = findStr(content, "<--include", contentLength, 10);
  }

  (*result) = content;

  return contentLength;
}
