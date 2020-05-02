#include "../headerFiles/binaryHeaderTree.h"

int calculateKeyHash(string key) {
  unsigned long hash = 5381;
  int c = key.length / 2;

  while (c--)
    hash = ((hash << 5) + hash) + *(key.content++); /* hash * 33 + c */

  return hash;
}