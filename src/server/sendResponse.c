#include "../server.h"

int sendResponse(int connection, response* respPtr) {
  char* httpResponse;
  int respSize = createHTTPResponse(respPtr, &httpResponse);

  send(connection, httpResponse, respSize, 0);

  free(httpResponse);
}
