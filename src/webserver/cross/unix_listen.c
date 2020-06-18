#include "../headerFiles/cross.h"
#ifdef UNIX

int c_listen(c_socket serverSock) {
  return listen(serverSock, SOMAXCONN);
}

#endif