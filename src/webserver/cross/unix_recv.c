#include "../headerFiles/cross.h"
#ifdef UNIX

int c_recv(c_socket serverSock, char* buffer, int length) {
  return recv(serverSock, buffer, length, 0);
}

#endif