#include "../headerFiles/keyValueList.h"

kvNode_t* createKVNode(string* key, string* value) {
  kvNode_t* node = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  node->key = createString(key->content, key->length);

  node->value = createString(value->content, value->length);

  node->next = NULL;

  return node;
}
