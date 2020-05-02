#include "../headerFiles/binaryHeaderTree.h"

void cleanUpTree(BTreeNode_t* root) {
  if (!root) {
    return;
  }

  if (root->left) {
    cleanUpTree(root->left);
  }
  if (root->right) {
    cleanUpTree(root->right);
  }

  deleteNode(root);
}