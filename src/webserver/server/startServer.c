#include "../server.h"

int startServer(server_t* server) {
  if (listen(server->fd, SOMAXCONN)) {
    logError("Failed to listen for connections \n");
  }

  signal(SIGCHLD,SIG_IGN);

  logInfo("Now waiting for connections \n");
  while (1) {
    pthread_mutex_lock(&(server->lock->mutex));

    if (fork() == 0) {
      request tmpReq = createEmptyRequest();
      response tmpResp = createEmptyResponse();

      int session_fd = accept(server->fd, 0, 0);
      pthread_mutex_unlock(&(server->lock->mutex));

      handleConnection(session_fd, &tmpReq, &tmpResp, server->fManager);

      cleanRequest(&tmpReq);
      cleanResponse(&tmpResp);

      int worked = close(session_fd);
      if (worked < 0) {
        logError("Closing connection \n");
      }

      exit(0);
    }
  }

  return 0;
}
