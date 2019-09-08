#include "../headerFiles/templating.h"

int parseTemplate(char* rawContent, int rawContentLength, char** result) {
  int contentLength = rawContentLength;
  char* content = rawContent;

  int includeStart = findStr(content, "<--include", contentLength, 10);
  while (includeStart != -1) {
    int includeInnerStart = includeStart + 10;
    int includeEnd = findStrAfter(rawContent, "/>", contentLength, 2, includeStart);
    includeEnd += 2;

    int includeStrLength = (includeEnd - includeStart);
    char* includeStr;
    getSubstring(rawContent, includeStart, includeStrLength, &includeStr);

    includeStatement* statement;
    parseIncludeStatement(includeStr, includeStrLength, &statement);

    free(includeStr);

    char* data;
    int size = readRawFile(statement->filePath, &data);
    if (size < 0) {
      free(data);

      printf("[Error][parseTemplate] Could not include the file '%s' \n", statement->filePath);

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
