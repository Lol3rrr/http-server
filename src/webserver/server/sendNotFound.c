#include "../server.h"

void sendNotFound(int connection, request* reqPtr) {
  response* resp = createResponse(404, "Not Found", reqPtr->protokol.content);
  setData(resp, "", 0);

  sendResponse(connection, resp);

  cleanResponse(resp);
  free(resp);
}
