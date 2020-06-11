#include "../headerFiles/general.h"

int findCharArr(char* src, char* key, int srcLength, int keyLength) {
  int searchLength = srcLength;
  
  char* firstResult = memchr(src, *key, searchLength);
  int position = firstResult - src;
  searchLength -= position;
  while (firstResult) {
    if (position + keyLength > srcLength) {
      return -1;
    }

    if (keyLength == 1 || memcmp(src + position, key, keyLength) == 0) {
      return position;
    }

    firstResult = memchr(src + position + 1, *key, searchLength);
    position = firstResult - src;
    searchLength -= position;
  }

  return -1;
}
