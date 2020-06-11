#include "../server.h"

int handleGETrequest(request* req, response* resp, fileManager_t* fManager) {
  logDebug("[handleGETrequest] Loading File: '%.*s' \n", req->path.length, req->path.content);

  int typeID = 0;
  string contentType;
  determinContentType(req->path, &contentType, &typeID);

  string okStatus = {
    .content = "OK",
    .length = 2,
    .needsFree = 0
  };

  string result;
  loadContent(fManager, req->path, &result, typeID);

  setStatus(resp, HTTP_STATUSOK, okStatus);
  setData(resp, result.content, result.length);
  setContentType(resp, contentType, result.length);

  cleanString(contentType);
  cleanString(result);

  setCache(resp, req, -1);

  print_response_debug(resp);

  return 0;
}
