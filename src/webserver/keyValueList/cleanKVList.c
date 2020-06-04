#include "../headerFiles/keyValueList.h"

void cleanKVList(kvList_t list) {
  for (int i = 0; i < list.bufferSize; i++) {
    cleanString(list.buffer[i].key);
    cleanString(list.buffer[i].value);
  }
  free(list.buffer);

  cleanKVNodes(list.additional.next);
}