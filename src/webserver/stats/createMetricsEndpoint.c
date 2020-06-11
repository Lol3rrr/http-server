#include "../headerFiles/stats.h"

#include "../headerFiles/response.h"

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
      char* str;
      int length = counterRegistryToString(&counterRegistry, &str);

      string statusMessage = {
        .content = "OK",
        .length = 2,
        .needsFree = 0
      };
      string protokol = {
        .content = "HTTP/1.1",
        .length = 8,
        .needsFree = 0
      };
      response resp = createResponse(200, statusMessage, protokol);
      setData(&resp, str, length);

      string contentType = {
        .content = "text/plain; version=0.0.4",
        .length = 25,
        .needsFree = 0
      };
      setContentType(&resp, contentType, length);

      string headResponse;
      int respSize = createHTTPResponse(&resp, &headResponse);
      send(session_fd, headResponse.content, headResponse.length, MSG_DONTWAIT | MSG_MORE);
      cleanString(headResponse);
      if (resp.dataSize > 0) {
        send(session_fd, resp.data, resp.dataSize, 0);
        cleanString(headResponse);
      }

      cleanResponse(&resp);

      exit(0);
    }else {
      close(session_fd);
    }
  }
}
