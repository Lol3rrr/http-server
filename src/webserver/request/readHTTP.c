#include "../headerFiles/request.h"

int readHTTP(c_socket socketFd, char** buffer) {
  char* readBuffer = (char*) malloc(HTTP_BUFFER_SIZE * sizeof(char));

  int received = c_recv(socketFd, readBuffer, HTTP_BUFFER_SIZE);
  if (received < 1) {
    logDebug("[readHTTP] Connection Closed \n");
    free(readBuffer);

    return -1;
  }

  int totalLength = received;

  while (received == HTTP_BUFFER_SIZE) {
    char* nBuffer = (char*) malloc((totalLength + HTTP_BUFFER_SIZE) * sizeof(char));
    memcpy(nBuffer, readBuffer, totalLength);

    received = c_recv(socketFd, nBuffer + totalLength, HTTP_BUFFER_SIZE);
    if (received < 1) {
      logDebug("[readHTTP] Connection Closed \n");

      return -1;
    }

    free(readBuffer);
    readBuffer = nBuffer;
    totalLength += received;
  }

  if (totalLength < HTTP_BUFFER_SIZE) {
    readBuffer[totalLength] = '\0';
  }

  (*buffer) = readBuffer;

  return totalLength;
}
