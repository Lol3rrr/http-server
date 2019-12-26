#include "../headerFiles/general.h"

int checkForKey(char* src, char* key, int i, int keyLength) {
  for(int j = 0; j < keyLength; j++) {
    if (src[i + j] != key[j]) {
      return -1;
    }
  }

  return i;
}

int findCharArr(char* src, char* key, int srcLength, int keyLength) {
  for (int i = 0; i < srcLength - keyLength; i++) {
    int result = checkForKey(src, key, i, keyLength);
    if (result == -1) {
      continue;
    }

    return result;
  }

  return -1;
}
