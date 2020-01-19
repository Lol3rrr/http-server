#include "../server.h"

void sendInternalError(int connection, request* reqPtr) {
  response* resp = createResponse(500, "Internal Server Error", reqPtr->protokol.content);
  setData(resp, "", 0);

  sendResponse(connection, resp);

  cleanResponse(resp);
  free(resp);
}
