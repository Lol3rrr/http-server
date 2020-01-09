#include "../server.h"

int handleGETrequest(request* req, response* resp) {
  string* fileName = loadFileName(&(req->path));
  if (fileName->length < 0) {
    free(fileName->content);
    free(fileName);

    logError("Loading Filename \n");

    return -1;
  }

  logDebug("[handleGETrequest] Loading File: '%s' \n", fileName->content);

  char* data;
  int size = loadFile(fileName, &data);
  if (size < 0) {
    logError("Loading Data: '%d' Loading Filename: '%s' \n", size, fileName->content);

    free(fileName->content);
    free(fileName);

    return 1;
  }

  free(fileName->content);
  free(fileName);

  setStatus(resp, 200, "OK");
  setData(resp, data, size);

  char* contentType;
  determinContentType(&(req->path), &contentType);
  setContentType(resp, contentType, size);
  setCache(resp, req, -1);

  print_response_debug(resp);

  free(contentType);

  return 0;
}
