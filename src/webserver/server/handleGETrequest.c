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

  FILE* fd;
  char* content;
  int closeFile;
  int length = loadContent(fManager, req->path, &content, &fd, &closeFile, typeID);
  if (length <= 0) {
    return 1;
  }

  setStatus(resp, HTTP_STATUSOK, okStatus);
  setContentType(resp, contentType, length);

  if (fd) {
    setStreaming(resp, fd, length, closeFile);
  } else if (content) {
    setData(resp, content, length);
  }

  cleanString(contentType);

  setCache(resp, req, -1);

  print_response_debug(resp);

  return 0;
}
