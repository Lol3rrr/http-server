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

      response* resp = createResponse(200, "OK", "HTTP/1.1");
      setData(resp, str, length);
      setContentType(resp, "text/plain; version=0.0.4", length);

      string* headResponse;
      string* bodyResponse;
      int respSize = createHTTPResponse(resp, &headResponse, &bodyResponse);
      send(session_fd, headResponse->content, headResponse->length, MSG_DONTWAIT | MSG_MORE);
      free(headResponse->content);
      free(headResponse);
      if (bodyResponse != 0) {
        send(session_fd, bodyResponse->content, bodyResponse->length, 0);
        free(bodyResponse);
      }

      cleanResponse(resp);
      free(resp);

      exit(0);
    }else {
      close(session_fd);
    }
  }
}
