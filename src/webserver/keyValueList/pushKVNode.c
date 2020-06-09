#include "../headerFiles/keyValueList.h"

kvNode_t* pushKVNode(kvNode_t* head, string key, string value) {
  kvNode_t* current = head;
  while (current->next != NULL)
    current = current->next;

  current->next = createKVNode(key, value);

  return current->next;
}
