#include "../headerFiles/keyValueList.h"

kvNode_t* createKVNode(string* key, string* value) {
  kvNode_t* node = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  node->key = createEmptyString(key->length);
  strncpy(node->key->content, key->content, key->length);

  node->value = createEmptyString(value->length);
  strncpy(node->value->content, value->content, value->length);

  node->next = NULL;

  return node;
}
