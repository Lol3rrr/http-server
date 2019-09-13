#include "../headerFiles/general.h"

int findStrAfter(char* src, char* key, int srcLength, int keyLength, int starting) {
  if (srcLength < 0) {
    srcLength = getStringLength(src);
  }
  if (keyLength < 0) {
    keyLength = getStringLength(key);
  }

  for (int i = starting; i < srcLength; i++) {
    for(int j = 0; j < keyLength; j++) {
      if (src[i + j] == '\0') {
        return -1;
      }

      if (src[i + j] != key[j]) {
        break;
      }

      if (j == keyLength - 1) {
        return i;
      }
    }
  }

  return -1;
}