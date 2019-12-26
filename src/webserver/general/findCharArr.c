#include "../headerFiles/general.h"

int findCharArr(char* src, char* key, int srcLength, int keyLength) {
  for (int i = 0; 1; i++) {
    for(int j = 0; j < keyLength; j++) {
      int index = i + j;
      if (src[index] == '\0') {
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
