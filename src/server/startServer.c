#include "../server.h"

int startServer(int serverFd) {
  if (listen(serverFd, SOMAXCONN)) {
    printf("[Error] failed to listen for connections \n");
  }

  signal(SIGCHLD,SIG_IGN);

  printf("[Info] Now waiting for connections \n");
  while (1) {
    int session_fd = accept(serverFd, 0, 0);

    if (fork() == 0) {
      handleConnection(session_fd);

      int worked = close(session_fd);
      if (worked < 0) {
        printf("[Error] closing connection \n");
      }

      exit(0);
    }else {
      close(session_fd);
    }
  }

  return 0;
}
