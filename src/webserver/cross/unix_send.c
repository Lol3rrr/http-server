#include "../headerFiles/cross.h"
#ifdef UNIX

int c_send(c_socket serverSock, char* buffer, int bufferSize, int flags) {
  return send(serverSock, buffer, bufferSize, flags);
}

#endif