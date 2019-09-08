#include "../headerFiles/templating.h"

int parseIncludeStatement(char* includeText, int length, includeStatement** statement) {
  int pathStart = findStr(includeText, "path=\"", length, 6);
  if (pathStart == -1)
    return -1;

  pathStart += 6;

  int pathEnd = findStrAfter(includeText, "\"", length, 1, pathStart);
  if (pathEnd == -1)
    return -1;

  char* substr;
  getSubstring(includeText, pathStart, (pathEnd - pathStart), &substr);

  char* fileName;
  int fileNameLength = loadFileName(substr, &fileName);
  free(substr);
  if (fileNameLength < 0) {
    free(fileName);

    return -1;
  }

  (*statement) = (includeStatement*) malloc(1 * sizeof(includeStatement));
  (*statement)->filePath = fileName;

  return 0;
}
