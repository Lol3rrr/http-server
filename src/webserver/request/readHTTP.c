#include "../headerFiles/request.h"

int readHTTP(int socketFd, char** buffer, int preBufferLength, int* resultBufferLength) {
  int received = recv(socketFd, *buffer, preBufferLength, 0);
  if (received < 1) {
    logDebug("[readHTTP] Connection Closed \n");

    return -1;
  }

  int totalLength = preBufferLength;
  int bufferSize = preBufferLength;

  while (received == HTTP_BUFFER_SIZE) {
    char* nBuffer = (char*) malloc((bufferSize + HTTP_BUFFER_SIZE) * sizeof(char));

    received = recv(socketFd, nBuffer + bufferSize, HTTP_BUFFER_SIZE, 0);
    if (received < 1) {
      logDebug("[readHTTP] Connection Closed \n");
      free(nBuffer);
      *resultBufferLength = bufferSize;

      return -1;
    }
    memcpy(nBuffer, *buffer, bufferSize);

    free(*buffer);
    *buffer = nBuffer;
    totalLength += received;
    bufferSize += HTTP_BUFFER_SIZE;
  }

  *resultBufferLength = bufferSize;

  return totalLength;
}
