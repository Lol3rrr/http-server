#include "../headerFiles/binaryHeaderTree.h"

void createHeaderPair(BTreeNode_t* node, string* result) {
  int totalLength = node->key.length + 2 + node->value.length;

  string nString = {
    .content = createEmptyCString(totalLength),
    .length = totalLength
  };
  memcpy(nString.content, node->key.content, node->key.length);
  memcpy(nString.content + node->key.length + 0, ": ", 2);
  memcpy(nString.content + node->key.length + 2, node->value.content, node->value.length);

  *result = nString;
}
