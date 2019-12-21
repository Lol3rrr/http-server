#include "../server.h"

int sendNotFound(int connection, request* reqPtr) {
  response* resp = createResponse(404, "Not Found", reqPtr->protokol->content);
  setData(resp, "", 0);

  sendResponse(connection, resp);

  cleanResponse(resp);
}
