#include "../headerFiles/keyValueList.h"

kvNode_t* createKVNode(string* key, string* value) {
  kvNode_t* node = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  node->key = key;
  node->value = value;

  node->next = NULL;

  return node;
}
