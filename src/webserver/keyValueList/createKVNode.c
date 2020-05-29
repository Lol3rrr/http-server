#include "../headerFiles/keyValueList.h"

kvNode_t* createKVNode(string* key, string* value) {
  kvNode_t* node = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  node->key = key->content;
  node->keyLength = key->length;
  node->keyFree = key->needsFree;
  node->value = value->content;
  node->valueLength = value->length;
  node->valueFree = value->needsFree;

  node->next = NULL;

  return node;
}
