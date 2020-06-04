#include "../headerFiles/keyValueList.h"

int createHeaderPair(kvNode_t* node, char* destination) {
  int totalLength = node->key.length + 2 + node->value.length;

  memcpy(destination, node->key.content, node->key.length);
  memcpy(destination + node->key.length + 0, ": ", 2);
  memcpy(destination + node->key.length + 2, node->value.content, node->value.length);

  return totalLength;
}