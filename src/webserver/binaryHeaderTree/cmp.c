#include "../headerFiles/binaryHeaderTree.h"

int cmp(string keyStr, int keyHash, BTreeNode_t* node) {
  return (keyStr.length != node->key.length) ? 
    keyStr.length - node->key.length :
    (keyHash != node->keyHash) ? keyHash - node->keyHash : strcmp(keyStr.content, node->key.content);
}