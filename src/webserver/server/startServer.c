#include "../server.h"

void* acceptCon(void* serverData) {
  server_t* server = (server_t*) serverData;

  request tmpReq = createEmptyRequest();
  response tmpResp = createEmptyResponse();

  int session_fd = accept(server->fd, 0, 0);
  pthread_mutex_unlock(&(server->mutex));

  handleConnection(session_fd, &tmpReq, &tmpResp, server->fManager);

  cleanRequest(&tmpReq);
  cleanResponse(&tmpResp);

  int worked = close(session_fd);
  if (worked < 0) {
    logError("Closing connection \n");
  }

  pthread_exit(NULL);
}

int startServer(server_t* server) {
  if (listen(server->fd, SOMAXCONN)) {
    logError("Failed to listen for connections \n");
  }

  signal(SIGCHLD,SIG_IGN);

  logInfo("Now waiting for connections \n");
  while (1) {
    pthread_mutex_lock(&(server->mutex));

    pthread_t thread_id;
    pthread_create(&thread_id, NULL, acceptCon, server);
    pthread_detach(thread_id);
  }

  return 0;
}
