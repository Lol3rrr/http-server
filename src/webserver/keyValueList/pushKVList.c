#include "../headerFiles/keyValueList.h"

kvNode_t* pushKVList(kvList_t* list, string key, string value) {
  if (list->currentIndex < list->bufferSize) {
    int index = list->currentIndex;

    list->buffer[index].key.content = key.content;
    list->buffer[index].key.length = key.length;
    list->buffer[index].key.needsFree = key.needsFree;
      
    list->buffer[index].value.content = value.content;
    list->buffer[index].value.length = value.length;
    list->buffer[index].value.needsFree = value.needsFree;

    list->currentIndex++;

    return &(list->buffer[index]);
  }

  list->last->next = createKVNode(&key, &value);
  list->last = list->last->next;

  return list->last;
}