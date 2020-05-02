#include "../headerFiles/binaryHeaderTree.h"

static void insert_recursive(BTreeNode_t** root, string key, int keyHash, string value) {
  if (!(*root)) {
    *root = (BTreeNode_t*) malloc(1 * sizeof(BTreeNode_t));
    (*root)->key = key;
    (*root)->value = value;
    (*root)->keyHash = keyHash;
    (*root)->left = NULL;
    (*root)->right = NULL;

    return;
  }

  int cmpValue = cmp(key, keyHash, *root);
  if (cmpValue == 0) {
    free((*root)->value.content);
    (*root)->value.content = value.content;
    (*root)->value.length = value.length;
    (*root)->keyHash = keyHash;

    return;
  } else if (cmpValue < 0) {
    return insert_recursive(&((*root)->left), key, keyHash, value);
  } else {
    return insert_recursive(&((*root)->right), key, keyHash, value);
  }
}

void insert(BTreeNode_t** root, string key, string value) {
  insert_recursive(root, key, calculateKeyHash(key), value);
}