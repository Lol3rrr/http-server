#include "../headerFiles/keyValueList.h"

kvNode_t* createKVNode(string key, string value) {
  kvNode_t* node = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  node->key.content = key.content;
  node->key.length = key.length;
  node->key.needsFree = key.needsFree;
  
  node->value.content = value.content;
  node->value.length = value.length;
  node->value.needsFree = value.needsFree;

  node->next = NULL;

  return node;
}
