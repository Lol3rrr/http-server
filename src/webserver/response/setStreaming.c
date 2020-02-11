#include "../headerFiles/response.h"

int setStreaming(response* respPtr, FILE* f, int size) {
  respPtr->file = f;
  respPtr->streaming = 1;
  respPtr->streamSize = size;

  return 0;
}
