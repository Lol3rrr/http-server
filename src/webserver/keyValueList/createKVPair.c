#include "../headerFiles/keyValueList.h"

string* createKVPair(kvNode_t* node) {
  int totalLength = node->key->length + 2 + node->value->length;

  string* result = createEmptyString(totalLength);
  memcpy(result->content, node->key->content, node->key->length);
  memcpy(result->content + node->key->length + 0, ":", 1);
  memcpy(result->content + node->key->length + 1, " ", 1);
  memcpy(result->content + node->key->length + 2, node->value->content, node->value->length);

  return result;
}
