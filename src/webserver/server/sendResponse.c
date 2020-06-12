#include "../server.h"

int sendResponse(int connection, response* respPtr) {
  string headResponse;
  int worked = createHTTPResponse(respPtr, &headResponse);

  int flags = (respPtr->dataSize > 0) ? MSG_DONTWAIT | MSG_MORE : 0;

  send(connection, headResponse.content, headResponse.length, flags);
  cleanString(headResponse);

  if (respPtr->streamingFd) {
    int fd = fileno(respPtr->streamingFd);

    char buffer[BUFFERSIZE];
    int currentOffset = 0;
    int totalSize = respPtr->dataSize;

    while (totalSize > 0) {
      int readSize = (totalSize < BUFFERSIZE) ? totalSize : BUFFERSIZE;
      flags = (totalSize < BUFFERSIZE) ? 0 : MSG_DONTWAIT | MSG_MORE;
      
      int read = pread(fd, buffer, readSize, currentOffset);
      
      send(connection, buffer, read, flags);

      currentOffset += read;
      totalSize -= read;
    }
  } else if (respPtr->data != NULL) {
    send(connection, respPtr->data, respPtr->dataSize, 0);
  }

  return 0;
}
