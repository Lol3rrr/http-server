#include "../headerFiles/keyValueList.h"

void forEach(kvList_t list, void** extraData, void (*callBack)(kvNode_t* node, void** data)) {
  for (int i = 0; i < list.bufferSize; i++) {
    if (list.buffer[i].key.content == NULL) {
      continue;
    }
    
    callBack(&(list.buffer[i]), extraData);
  }

  kvNode_t* current = list.additional.next;
  while (current != NULL) {
    callBack(current, extraData);

    current = current->next;
  }
}