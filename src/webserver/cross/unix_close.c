#include "../headerFiles/cross.h"
#ifdef UNIX

int c_close(c_socket serverSock) {
  return close(serverSock);
}

#endif