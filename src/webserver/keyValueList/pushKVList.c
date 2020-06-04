#include "../headerFiles/keyValueList.h"

kvNode_t* pushKVList(kvList_t list, string key, string value) {
  for (int i = 0; i < list.bufferSize; i++) {
    if (list.buffer[i].key.content == NULL) {
      list.buffer[i].key.content = key.content;
      list.buffer[i].key.length = key.length;
      list.buffer[i].key.needsFree = key.needsFree;
      
      list.buffer[i].value.content = value.content;
      list.buffer[i].value.length = value.length;
      list.buffer[i].value.needsFree = value.needsFree;

      return &(list.buffer[i]);
    }
  }

  kvNode_t* current = &(list.additional);
  while (current->next) {
    current = current->next;
  }

  current->next = createKVNode(&key, &value);

  return current->next;
}