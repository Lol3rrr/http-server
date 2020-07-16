#include "../headerFiles/keyValueList.h"

kvNode_t* pushKVList(kvList_t* list, string key, string value) {
  if (list->currentIndex < list->bufferSize) {
    int index = list->currentIndex;

    memcpy(&(list->buffer[index].key), &key, sizeof(string));
    memcpy(&(list->buffer[index].value), &value, sizeof(string));

    list->currentIndex++;

    return &(list->buffer[index]);
  }

  list->last->next = createKVNode(key, value);
  list->last = list->last->next;

  return list->last;
}