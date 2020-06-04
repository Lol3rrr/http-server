#include "../headerFiles/keyValueList.h"

int findKV(kvList_t list, string key, kvNode_t** result) {
  for (int i = 0; i < list.bufferSize; i++) {
    if (list.buffer[i].key.content != NULL && stringCmp(list.buffer[i].key, key) == 0) {
      *result = &(list.buffer[i]);
      return 0;
    }
  }

  kvNode_t* current = list.additional.next;
  while (current != NULL) {
    if (stringCmp(current->key, key) == 0) {
      *result = current;
      return 0;
    }

    current = current->next;
  }
  
  return -1;
}