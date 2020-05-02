#include "../headerFiles/binaryHeaderTree.h"

void forEach(BTreeNode_t* root, void** extraData, void (*callBack)(BTreeNode_t* node, void** data)) {
  if (!root) {
    return;
  }

  if (root->left) {
    forEach(root->left, extraData, callBack);
  }

  callBack(root, extraData);

  if (root->right) {
    forEach(root->right, extraData, callBack);
  }
}