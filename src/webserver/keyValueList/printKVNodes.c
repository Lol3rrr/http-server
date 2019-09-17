#include "../headerFiles/keyValueList.h"

void print_kv_nodes(kvNode_t* head) {
  kvNode_t* current = head;
  while (current != NULL) {
    logDebug("[KV-Node] Key: '%s' Value: '%s' \n", current->key, current->value);
    current = current->next;
  }
}
