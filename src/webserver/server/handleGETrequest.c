#include "../server.h"

int handleGETrequest(int conFd, request* req) {
  char* fileName;
  int fileNameLength = loadFileName(req->path, &fileName);
  if (fileNameLength < 0) {
    free(fileName);

    logError("Loading Filename \n");

    return 1;
  }

  logDebug("[handleGETrequest] Loading File: '%s' \n", fileName);

  char* data;
  int size = loadFile(fileName, &data);
  if (size < 0) {
    logError("Loading Data: '%d' Loading Filename: '%s' \n", size, fileName);

    free(fileName);

    sendNotFound(conFd, req);
    cleanRequest(req);

    return 1;
  }

  free(fileName);

  response* resp = createResponse(200, "OK", req->protokol);
  setData(resp, data, size);

  char* contentType;
  determinContentType(req->path, &contentType);
  setContentType(resp, contentType, size);
  setCache(resp, req, -1);

  print_response_debug(resp);

  sendResponse(conFd, resp);

  logDebug("[handleGETrequest] Cleaning Up \n");

  free(contentType);

  cleanRequest(req);
  cleanResponse(resp);

  logDebug("[handleGETrequest] Cleaned up \n");
  logDebug("---------------- \n");
}
