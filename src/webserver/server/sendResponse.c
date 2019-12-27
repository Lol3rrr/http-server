#include "../server.h"

int sendResponse(int connection, response* respPtr) {
  string* headResponse;
  string* bodyResponse;
  int worked = createHTTPResponse(respPtr, &headResponse, &bodyResponse);

  int flags = (bodyResponse != NULL) ? MSG_DONTWAIT | MSG_MORE : 0;

  send(connection, headResponse->content, headResponse->length, flags);

  if (bodyResponse != NULL) {
    send(connection, bodyResponse->content, bodyResponse->length, 0);
  }

  free(headResponse->content);
  free(headResponse);
  free(bodyResponse);
}
