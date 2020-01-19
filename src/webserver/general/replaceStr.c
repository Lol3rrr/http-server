#include "../headerFiles/general.h"

void replaceStr(char* src, char* replacement, int start, int lengthToReplace, char** result, int* resultLength) {
  int srcLength = strlen(src);
  int replacementLength = strlen(replacement);

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
