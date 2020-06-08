#include "../server.h"

void sendNotFound(int connection, request* reqPtr) {
  string statusMessage = {
    .content = "Not Found",
    .length = 9,
    .needsFree = 0
  };
  response resp = createResponse(404, statusMessage, reqPtr->protokol);
  setData(&resp, "", 0);

  sendResponse(connection, &resp);

  cleanResponse(&resp);
}
