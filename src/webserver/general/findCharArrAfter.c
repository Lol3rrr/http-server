#include "../headerFiles/general.h"

int findCharArrAfter(char* src, char* key, int srcLength, int keyLength, int starting) {
  if (srcLength < 0) {
    srcLength = strlen(src);
  }
  if (keyLength < 0) {
    keyLength = strlen(key);
  }

  if (starting < 0 || starting >= srcLength) {
    return -1;
  }

  int found = findCharArr(src + starting, key, srcLength - starting, keyLength);
  if (found < 0) {
    return -1;
  }

  return found + starting;
}
