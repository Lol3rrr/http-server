#include "../headerFiles/binaryHeaderTree.h"

static const int steps = 2;

int calculateKeyHash(string key) {
  unsigned long hash = 5381;
  int c = key.length / steps;
  char* content = key.content;

  while (c--)
    hash = ((hash << 5) + hash) + *(content += steps); /* hash * 33 + c */

  return hash;;
}