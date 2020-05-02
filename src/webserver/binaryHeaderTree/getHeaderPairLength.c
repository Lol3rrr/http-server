#include "../headerFiles/binaryHeaderTree.h"

int getHeaderPairLength(BTreeNode_t* node) {
  return node->key.length + 2 + node->value.length;
}