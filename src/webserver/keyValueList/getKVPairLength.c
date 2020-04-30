#include "../headerFiles/keyValueList.h"

int getKVPairLength(kvNode_t* node) {
  return node->keyLength + 2 + node->valueLength;
}