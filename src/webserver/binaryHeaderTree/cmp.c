#include "../headerFiles/binaryHeaderTree.h"

int cmp(string keyStr, int keyHash, BTreeNode_t* node) {
  return (keyHash != node->keyHash) ? keyHash - node->keyHash : strcmp(keyStr.content, node->key.content);
}