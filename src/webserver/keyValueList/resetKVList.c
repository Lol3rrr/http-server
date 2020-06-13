#include "../headerFiles/keyValueList.h"

void resetKVList(kvList_t* list) {
  for (int i = 0; i < list->bufferSize; i++) {
    if (list->buffer[i].key.content != NULL) {
      cleanString(list->buffer[i].key);
      cleanString(list->buffer[i].value);
    }
    list->buffer[i].key.content = NULL;
    list->buffer[i].value.content = NULL;
  }
  list->currentIndex = 0;

  cleanKVNodes(list->additional.next);
}