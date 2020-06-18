#include "../headerFiles/cross.h"
#ifdef UNIX

c_socket c_accept(c_socket serverSock) {
  return accept(serverSock, 0, 0);
}

#endif