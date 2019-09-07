#include "../general.h"

int findStr(char* src, char* key, int srcLength, int keyLength) {
  if (srcLength < 0) {
    srcLength = getLength(src);
  }
  if (keyLength < 0) {
    keyLength = getLength(key);
  }

  for (int i = 0; i < srcLength; i++) {
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
