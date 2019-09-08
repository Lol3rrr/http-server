#include "../headerFiles/general.h"

#include <stdio.h>

int replaceStr(char* src, char* replacement, int start, int lengthToReplace, char** result) {
  int srcLength = getStringLength(src);
  int replacementLength = getStringLength(replacement);

  int totalLength = srcLength - lengthToReplace + replacementLength;
  char* data = createEmptyCString(totalLength);

  int index = 0;
  for (int i = 0; i < start; i++) {
    data[index] = src[i];
    index++;
  }

  for (int i = 0; i < replacementLength; i++) {
    data[index] = replacement[i];
    index++;
  }

  for (int i = start + lengthToReplace; i < srcLength; i++) {
    data[index] = src[i];
    index++;
  }

  (*result) = data;

  return totalLength;
}
