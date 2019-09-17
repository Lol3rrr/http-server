#include "../headerFiles/keyValueList.h"

void pushKVNode(kvNode_t* head, char* key, char* value, int pKeyLength, int pValueLength) {
  kvNode_t* current = head;
  while (current->next != NULL)
    current = current->next;

  current->next = createKVNode(key, value, pKeyLength, pValueLength);
}
