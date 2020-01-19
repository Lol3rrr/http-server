#include "../headerFiles/keyValueList.h"

void createKVPair(kvNode_t* node, string* result) {
  int totalLength = node->keyLength + 2 + node->valueLength;

  string nString = {
    content: createEmptyCString(totalLength),
    length: totalLength
  };
  memcpy(nString.content, node->key, node->keyLength);
  memcpy(nString.content + node->keyLength + 0, ":", 1);
  memcpy(nString.content + node->keyLength + 1, " ", 1);
  memcpy(nString.content + node->keyLength + 2, node->value, node->valueLength);

  *result = nString;
}
