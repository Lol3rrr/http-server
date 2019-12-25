#include "../headerFiles/general.h"

int findCharArr(char* src, char* key, int srcLength, int keyLength) {
  if (srcLength < 0) {
    srcLength = strlen(src);
  }
  if (keyLength < 0) {
    keyLength = strlen(key);
  }

  for (int i = 0; i < srcLength; i++) {
    for(int j = 0; j < keyLength; j++) {
      int index = i + j;
      if (index >= srcLength) {
        return -1;
      }

      if (src[index] != key[j]) {
        break;
      }

      if (j == keyLength - 1) {
        return i;
      }
    }
  }

  return -1;
}
