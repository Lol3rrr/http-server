#include "../headerFiles/binaryHeaderTree.h"

int calculateKeyHash(string key) {
  int result = key.length;

  for (int i = 0; i < key.length / 2; i++) {
    result += key.content[i] * i;
  }

  return result;
}