#include "../server.h"

int createServer(int port) {
  struct sockaddr_in addr;
  int fd;

  fd = socket(AF_INET, SOCK_STREAM, 0);
  if(fd == -1) {
      logError("Could not open socket \n");
      return -1;
  }

  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = 0;
  addr.sin_addr.s_addr = INADDR_ANY;
  addr.sin_family = AF_INET;

  if(bind(fd, (struct sockaddr *)&addr,sizeof(struct sockaddr_in) ) == -1) {
      logError("Could not bind socket \n");
      return -1;
  }

  logInfo("Successfully bound to port %u \n", port);


  // Create All the needed Metrics
  createCounter("total_requests", &counterRegistry);
  createCounter("total_errors", &counterRegistry);

  if (fork() == 0) {
    createMetricsEndpoint(9001);
  }

  return fd;
}
