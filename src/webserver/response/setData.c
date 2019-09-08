#include "../headerFiles/response.h"

int setData(response* respPtr, char* data, int size) {
  respPtr->data = data;
  respPtr->dataSize = size;

  return 0;
}
