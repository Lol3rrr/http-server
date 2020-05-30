#include "../headerFiles/request.h"

int readHTTP(int socketFd, char** buffer) {
  int bufferSize = 4096;
  char* readBuffer = (char*) malloc(bufferSize * sizeof(char));

  int received = recv(socketFd, readBuffer, bufferSize, 0);
  if (received < 1) {
    if (received == 0) {
      logDebug("[readHTTP] Connection Closed \n");
    }

    return -1;
  }

  int totalLength = received;

  for (int i = 2; received == bufferSize; i++) {
    char* nBuffer = (char*) malloc(i * bufferSize * sizeof(char));
    memcpy(nBuffer, readBuffer, (i - 1) * bufferSize);

    received = recv(socketFd, nBuffer + (i - 1) * bufferSize, bufferSize, 0);
    if (received < 1) {
      if (received == 0) {
        logDebug("[readHTTP] Connection Closed \n");
      }

      return -1;
    }

    free(readBuffer);
    readBuffer = nBuffer;
  }

  if (totalLength < bufferSize) {
    readBuffer[totalLength] = '\0';
  }

  (*buffer) = readBuffer;

  return totalLength;
}
