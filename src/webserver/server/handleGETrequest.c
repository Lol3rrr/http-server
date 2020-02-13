#include "../server.h"

int handleGETrequest(request* req, response* resp) {
  string fileName = loadFileName(&(req->path));
  if (fileName.length < 0) {
    free(fileName.content);

    logError("[handleGETrequest] Loading Filename \n");

    return -1;
  }

  logDebug("[handleGETrequest] Loading File: '%s' \n", fileName.content);

  int typeID = 0;
  char* contentType;
  determinContentType(&(req->path), &contentType, &typeID);

  if (isTemplateEnabled() && typeID == HTMLTYPE) {
    char* data;
    int size = loadFile(&fileName, &data);
    if (size < 0) {
      logError("Loading Data: '%d' Loading Filename: '%s' \n", size, fileName.content);

      free(fileName.content);
      free(contentType);

      return 1;
    }

    setStatus(resp, HTTP_STATUSOK, "OK");
    setData(resp, data, size);
    setContentType(resp, contentType, size);

    free(fileName.content);
  } else {
    File* f = (File*) malloc(1 * sizeof(File));
    int worked = openFile(&fileName, f);
    if (worked != 0) {
      free(fileName.content);
      free(contentType);
      closeFile(f);
      free(f);

  		return 1;
    }

    setStatus(resp, HTTP_STATUSOK, "OK");
    setStreaming(resp, f);
    setContentType(resp, contentType, f->length);

    free(fileName.content);
  }

  free(contentType);

  setCache(resp, req, -1);

  print_response_debug(resp);

  return 0;
}
