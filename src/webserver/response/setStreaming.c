#include "../headerFiles/response.h"

int setStreaming(response* respPtr, FILE* fd, int size, int closeFile) {
  respPtr->streamingFd = fd;
  respPtr->dataSize = size;
  respPtr->closeFile = closeFile;

  return 0;
}