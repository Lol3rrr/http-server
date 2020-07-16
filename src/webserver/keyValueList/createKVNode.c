#include "../headerFiles/keyValueList.h"

kvNode_t* createKVNode(string key, string value) {
  kvNode_t* node = (kvNode_t*) malloc(1 * sizeof(kvNode_t));

  memcpy(&(node->key), &key, sizeof(string));
  memcpy(&(node->value), &value, sizeof(string));

  node->next = NULL;

  return node;
}
