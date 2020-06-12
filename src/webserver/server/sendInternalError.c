#include "../server.h"

void sendInternalError(int connection, request* reqPtr) {
  string statusMessage = {
    .content = "Internal Server Error",
    .length = 21,
    .needsFree = 0
  };
  response resp = createResponse(500, statusMessage, reqPtr->protokol);

  sendResponse(connection, &resp);

  cleanResponse(&resp);
}
