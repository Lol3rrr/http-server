#include "general.h"

void setGeneralDebug(int value) {
  debug = value;
}
int isDebug() {
  return debug;
}

int getLength(char* src) {
  int length = 0;
  while (src[length] != '\0') {
    length++;
  }
  return length;
}

int find(char* src, char* key, int srcLength, int keyLength) {
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
