#include "../headerFiles/keyValueList.h"

void cleanKVList(kvList_t list) {
  for (int i = 0; i < list.bufferSize; i++) {
    if (list.buffer[i].key.content != NULL) {
      cleanString(list.buffer[i].key);
      cleanString(list.buffer[i].value);
    }
  }
  free(list.buffer);

  cleanKVNodes(list.additional.next);
}