#include "../headerFiles/request.h"

int readHTTP(int socketFd, char** buffer, int bufferSize) {
  char* readBuffer = (*buffer);

  int received = recv(socketFd, readBuffer, bufferSize, 0);
  if (received < 1) {
    if (received == 0) {
      logDebug("[readHTTP] Connection Closed \n");
    }

    return 1;
  }

  return received;
}