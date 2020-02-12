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

  if (isTemplateEnabled() && typeID == 0) {
    char* data;
    int size = loadFile(&fileName, &data);
    if (size < 0) {
      logError("Loading Data: '%d' Loading Filename: '%s' \n", size, fileName.content);

      free(fileName.content);
      free(contentType);

      return 1;
    }

    setStatus(resp, 200, "OK");
    setData(resp, data, size);
    setContentType(resp, contentType, size);

    free(fileName.content);
  } else {
    FILE *f = fopen(fileName.content, "rb");
  	if (f == NULL) {
      free(fileName.content);

      free(contentType);

  		return 1;
  	}
  	fseek(f, 0, SEEK_END);
  	int size = ftell(f);
    fseek(f, 0, SEEK_SET);

    setStatus(resp, 200, "OK");
    setStreaming(resp, f, size);
    setContentType(resp, contentType, size);

    free(fileName.content);
  }

  free(contentType);

  setCache(resp, req, -1);

  print_response_debug(resp);

  return 0;
}
