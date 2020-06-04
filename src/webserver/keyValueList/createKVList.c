#include "../headerFiles/keyValueList.h"

kvList_t createKVList(int bufferSize) {
  kvList_t result;

  result.bufferSize = bufferSize;
  result.buffer = (kvNode_t*) malloc(bufferSize * sizeof(kvNode_t));
  result.additional.next = NULL;
  result.additional.key.content = NULL;

  for (int i = 0; i < bufferSize; i++) {
    result.buffer[i].key.content = NULL;
  }

  return result;
}