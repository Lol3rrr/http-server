#include "../headerFiles/stats.h"

void createMetricsEndpoint(int port) {
  struct sockaddr_in addr;
  int fd;

  fd = socket(AF_INET, SOCK_STREAM, 0);
  if(fd == -1) {
      logError("Could not open socket \n");
      return;
  }

  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = 0;
  addr.sin_addr.s_addr = INADDR_ANY;
  addr.sin_family = AF_INET;

  if(bind(fd, (struct sockaddr *)&addr,sizeof(struct sockaddr_in) ) == -1) {
      logError("Could not bind socket \n");
      return;
  }

  logInfo("Successfully bound to port %u \n", port);


  if (listen(fd, SOMAXCONN)) {
    logError("Failed to listen for connections \n");
  }

  signal(SIGCHLD,SIG_IGN);

  logInfo("Now waiting for connections \n");
  while (1) {
    int session_fd = accept(fd, 0, 0);

    if (fork() == 0) {
      counter_t* current = counterRegistry;
      while (current != NULL) {
        logInfo("P: '%p' Stat: '%s' with Value: '%u' \n", current, current->name, current->count);
        current = current->next;
      }

      exit(0);
    }else {
      close(session_fd);
    }
  }
}
