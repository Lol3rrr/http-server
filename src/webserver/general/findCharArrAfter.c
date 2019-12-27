#include "../headerFiles/general.h"

int findCharArrAfter(char* src, char* key, int srcLength, int keyLength, int starting) {
  if (starting < 0 || starting >= srcLength) {
    return -1;
  }

  int found = findCharArr(src + starting, key, srcLength - starting, keyLength);
  return (found < 0) ? -1 : found + starting;
}
