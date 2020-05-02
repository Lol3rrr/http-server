#include "../headerFiles/binaryHeaderTree.h"

void deleteNode(BTreeNode_t* node) {
  free(node->key.content);
  free(node->value.content);

  free(node);
}