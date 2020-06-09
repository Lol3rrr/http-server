#include "../headerFiles/templating.h"

int parseIncludeStatement(string includeText, includeStatement* statement) {
  int pathStart = findStr(includeText, "path=\"", 6);
  if (pathStart == -1)
    return -1;

  pathStart += 6;

  int pathEnd = findCharArrAfter(includeText.content, "\"", includeText.length, 1, pathStart);
  if (pathEnd == -1)
    return -1;

  int subLength = (pathEnd - pathStart);
  string subStr = {
    .content = includeText.content + pathStart,
    .length = subLength
  };

  string fileName = loadFileName(subStr);
  if (fileName.length < 0) {
    cleanString(fileName);

    return -1;
  }

  (*statement).filePath = fileName.content;

  return 0;
}
