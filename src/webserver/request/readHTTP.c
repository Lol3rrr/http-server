#include "../headerFiles/request.h"

int readHTTP(int socketFd, char** buffer, int preBufferLength, int* resultBufferLength) {
  int readGoal = preBufferLength;
  int received = recv(socketFd, *buffer, readGoal, 0);
  if (received < 1) {
    logDebug("[readHTTP] Connection Closed \n");

    return -1;
  }

  int totalLength = preBufferLength;
  int bufferSize = preBufferLength;

  while (received == readGoal) {
    char* nBuffer = (char*) malloc((bufferSize + HTTP_BUFFER_SIZE) * sizeof(char));

    readGoal = HTTP_BUFFER_SIZE;
    received = recv(socketFd, nBuffer + bufferSize, readGoal, 0);
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
