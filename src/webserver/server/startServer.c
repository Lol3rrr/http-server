#include "../server.h"

int startServer(server_t* server) {
  if (c_listen(server->fd)) {
    logError("Failed to listen for connections \n");
  }

  tpool_t* threadPool = createThreadPool(server->threadCount, server->fManager);
  startThreadPool(threadPool);

  logInfo("Now waiting for connections \n");
  while (1) {
    tpool_work_t* work = tpool_createWork();
    c_socket session_fd = c_accept(server->fd);
    tpool_addWork(threadPool, work, session_fd);
  }

  return 0;
}
