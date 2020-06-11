#include "../server.h"

#define BUFFERSIZE 2048

int sendResponse(int connection, response* respPtr) {
  string headResponse;
  string bodyResponse;
  int worked = createHTTPResponse(respPtr, &headResponse, &bodyResponse);

  int flags = (bodyResponse.content != NULL) ? MSG_DONTWAIT | MSG_MORE : 0;

  send(connection, headResponse.content, headResponse.length, flags);
  cleanString(headResponse);

  if (bodyResponse.content != NULL) {
    send(connection, bodyResponse.content, bodyResponse.length, 0);
  }

  return 0;
}
