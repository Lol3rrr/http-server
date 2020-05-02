#include "../headerFiles/binaryHeaderTree.h"

void printTree(BTreeNode_t* root) {
  if (root->left) {
    printTree(root->left);
  }

  logDebug("[Header Tree] Key: '%s' Value: '%s' \n", root->key.content, root->value.content);

  if (root->right) {
    printTree(root->right);
  }
}