#include "../headerFiles/templating.h"

int parseIncludeStatement(string* includeText, includeStatement** statement) {
  int pathStart = findStr(includeText, "path=\"", 6);
  if (pathStart == -1)
    return -1;

  pathStart += 6;

  int pathEnd = findCharArrAfter(includeText->content, "\"", includeText->length, 1, pathStart);
  if (pathEnd == -1)
    return -1;

  int subLength = (pathEnd - pathStart);
  string subStr = {
    content: NULL,
    length: subLength
  };
  getSubstring(includeText->content, pathStart, subLength, &(subStr.content));

  string* fileName = loadFileName(&subStr);
  free(subStr.content);
  if (fileName->length < 0) {
    free(fileName->content);
    free(fileName);

    return -1;
  }

  (*statement) = (includeStatement*) malloc(1 * sizeof(includeStatement));
  (*statement)->filePath = fileName->content;

  free(fileName);

  return 0;
}
