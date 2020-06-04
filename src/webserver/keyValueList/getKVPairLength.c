#include "../headerFiles/keyValueList.h"

int getKVPairLength(kvNode_t* node) {
  return node->key.length + 2 + node->value.length;
}