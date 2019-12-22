#include "../headerFiles/templating.h"

int parseIncludeStatement(string* includeText, includeStatement** statement) {
  int pathStart = findStr(includeText->content, "path=\"", includeText->length, 6);
  if (pathStart == -1)
    return -1;

  pathStart += 6;

  int pathEnd = findStrAfter(includeText->content, "\"", includeText->length, 1, pathStart);
  if (pathEnd == -1)
    return -1;

  int subLength = (pathEnd - pathStart);
  string* subStr = getSubstring(includeText->content, pathStart, subLength);

  char* fileName;
  int fileNameLength = loadFileName(subStr, &fileName);
  free(subStr->content);
  free(subStr);
  if (fileNameLength < 0) {
    free(fileName);

    return -1;
  }

  (*statement) = (includeStatement*) malloc(1 * sizeof(includeStatement));
  (*statement)->filePath = fileName;

  return 0;
}
