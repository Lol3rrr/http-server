#include "../server.h"

int startServer(server_t* server) {
  if (listen(server->fd, SOMAXCONN)) {
    logError("Failed to listen for connections \n");
  }

  tpool_t* threadPool = createThreadPool(10, server->fManager);

  signal(SIGCHLD,SIG_IGN);

  logInfo("Now waiting for connections \n");
  while (1) {
    int session_fd = accept(server->fd, 0, 0);
    tpool_addWork(threadPool, session_fd);
  }

  return 0;
}
