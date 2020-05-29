#include "../headerFiles/binaryHeaderTree.h"

static BTreeNode_t* search_recursive(BTreeNode_t* root, string key, int keyHash) {
  if (!root) {
    return NULL;
  }

  int cmpValue = cmp(key, keyHash, root);
  if (cmpValue == 0) {
    return root;
  } else if (cmpValue < 0) {
    return search_recursive(root->left, key, keyHash);
  } else {
    return search_recursive(root->right, key, keyHash);
  }
}

BTreeNode_t* search(BTreeNode_t* root, string key) {
  return search_recursive(root, key, calculateKeyHash(key));
}