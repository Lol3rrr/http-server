#include "../headerFiles/keyValueList.h"

void print_kv_list(kvList_t list) {
  for (int i = 0; i < list.bufferSize; i++) {
    if (list.buffer[i].key.content == NULL) {
      continue;
    }

    logDebug("[KV-Node] Key: '%.*s' Value: '%.*s' \n", list.buffer[i].key.length, list.buffer[i].key.content, list.buffer[i].value.length, list.buffer[i].value.content);
  }

  kvNode_t* current = list.additional.next;
  while (current != NULL) {
    logDebug("[KV-Node] Key: '%.*s' Value: '%.*s' \n", current->key.length, current->key.content, current->value.length, current->value.content);
    current = current->next;
  }
}