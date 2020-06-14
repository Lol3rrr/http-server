#include "../server.h"

int startServer(server_t* server) {
  if (listen(server->fd, SOMAXCONN)) {
    logError("Failed to listen for connections \n");
  }

  tpool_t* threadPool = createThreadPool(server->threadCount, server->fManager);

  logInfo("Now waiting for connections \n");
  while (1) {
    int session_fd = accept(server->fd, 0, 0);
    tpool_addWork(threadPool, session_fd);
  }

  return 0;
}
