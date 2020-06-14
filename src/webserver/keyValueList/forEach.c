#include "../headerFiles/keyValueList.h"

void forEach(kvList_t list, void** extraData, void (*callBack)(kvNode_t* node, void** data)) {
  kvNode_t* current = list.buffer;
  kvNode_t* end = list.buffer + list.bufferSize;
  for (;current < end && current->key.content;) {
    callBack(current, extraData);
    current++;
  }

  current = list.additional.next;
  while (current != NULL) {
    callBack(current, extraData);

    current = current->next;
  }
}