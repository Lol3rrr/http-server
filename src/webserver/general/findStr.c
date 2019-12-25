#include "../headerFiles/general.h"

int findStr(string* src, char* key, int keyLength) {
  keyLength = (keyLength < 0) ? strlen(key) : keyLength;

  for (int i = 0; i < src->length; i++) {
    for(int j = 0; j < keyLength; j++) {
      int index = i + j;
      if (index >= src->length) {
        return -1;
      }

      if (src->content[index] != key[j]) {
        break;
      }

      if (j == keyLength - 1) {
        return i;
      }
    }
  }

  return -1;
}
