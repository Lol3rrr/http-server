#include "../headerFiles/general.h"

void replaceStr(string* srcStr, string* replacementStr, int start, int lengthToReplace, char** result, int* resultLength) {
  char* src = srcStr->content;
  char* replacement = replacementStr->content;

  int srcLength = srcStr->length;
  int replacementLength = replacementStr->length;

  int totalLength = srcLength - lengthToReplace + replacementLength;
  char* nString = createEmptyCString(totalLength);

  int contentOffset = 0;
  memcpy(nString + contentOffset, src, start);
  contentOffset += start;
  memcpy(nString + contentOffset, replacement, replacementLength);
  contentOffset += replacementLength;
  memcpy(nString + contentOffset, src + start + lengthToReplace, srcLength - (start + lengthToReplace));

  *result = nString;
  *resultLength = totalLength;

  return;
}
