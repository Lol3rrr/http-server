#include "../headerFiles/stats.h"

#include "../headerFiles/response.h"

void* createMetricsEndpoint(void* rawPort) {
  int port = *((int*) rawPort);
  c_socket fd = c_createSocket(port);

  logInfo("Successfully bound to port %u \n", port);


  if (c_listen(fd)) {
    logError("Failed to listen for connections \n");
  }

  logInfo("Now waiting for connections \n");
  while (1) {
    c_socket session_fd = c_accept(fd);

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
    c_send(session_fd, headResponse.content, headResponse.length, MSG_DONTWAIT | MSG_MORE);
    cleanString(headResponse);
    if (resp.dataSize > 0) {
      c_send(session_fd, resp.data, resp.dataSize, 0);
      cleanString(headResponse);
    }

    cleanResponse(&resp);
    c_close(session_fd);
  }

  return NULL;
}
