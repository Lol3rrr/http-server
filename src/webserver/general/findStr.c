#include "../headerFiles/general.h"

int findStr(string src, char* key, int keyLength) {
  keyLength = (keyLength < 0) ? strlen(key) : keyLength;

  return findCharArr(src.content, key, src.length, keyLength);
}
