#include "../headerFiles/templating.h"

int parseIncludeStatement(char* includeText, int length, includeStatement** statement) {
  int pathStart = findStr(includeText, "path=\"", length, 6);
  if (pathStart == -1)
    return -1;

  pathStart += 6;

  int pathEnd = findStrAfter(includeText, "\"", length, 1, pathStart);
  if (pathEnd == -1)
    return -1;

  char* rawSubstr;
  int subLength = (pathEnd - pathStart);
  getSubstring(includeText, pathStart, subLength, &rawSubstr);

  string* subStr = createEmptyString(subLength);
  strncpy(subStr->content, rawSubstr, subLength);
  free(rawSubstr);

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
