#include "../server.h"

int sendResponse(int connection, response* respPtr) {
  string* headResponse;
  string* bodyResponse;
  int worked = createHTTPResponse(respPtr, &headResponse, &bodyResponse);

  send(connection, headResponse->content, headResponse->length, MSG_DONTWAIT | MSG_MORE);

  if (bodyResponse != 0) {
    send(connection, bodyResponse->content, bodyResponse->length, MSG_DONTWAIT);
  }

  free(headResponse->content);
  free(headResponse);
  free(bodyResponse);
}
