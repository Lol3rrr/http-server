#include "../headerFiles/binaryHeaderTree.h"

static void removeNode_recursive(BTreeNode_t** root, string key, int keyHash) {
  if (!(*root)) {
    return;
  }

  int cmpValue = cmp(key, keyHash, *root);
  if (cmpValue == 0) {
    if (!(*root)->left && !(*root)->right) {
      deleteNode(*root);
      *root = NULL;

      return;
    }

    BTreeNode_t* childNode = NULL;
    if ((*root)->left && !(*root)->right) {
      childNode = (*root)->left;
    }
    if ((*root)->right && !(*root)->left) {
      childNode = (*root)->right;
    }
    if (childNode) {
      (*root)->key = childNode->key;
      (*root)->value = childNode->value;
      (*root)->left = childNode->left;
      (*root)->right = childNode->right;
      (*root)->keyHash = childNode->keyHash;

      free(childNode);
      return;
    }

    BTreeNode_t* repParentNode = (*root);
    BTreeNode_t* repNode = (*root)->left;
    while (repNode->right) {
      repParentNode = repNode;
      repNode = repNode->right;
    }

    (*root)->key = repNode->key;
    (*root)->value = repNode->value;
    (*root)->keyHash = repNode->keyHash;

    repParentNode->right = repNode->left;
    free(repNode);
    return;
    
  } else if (cmpValue < 0) {
    return removeNode_recursive(&((*root)->left), key, keyHash);
  } else {
    return removeNode_recursive(&((*root)->right), key, keyHash);
  }
}

void removeNode(BTreeNode_t** root, string key) {
  removeNode_recursive(root, key, calculateKeyHash(key));
}