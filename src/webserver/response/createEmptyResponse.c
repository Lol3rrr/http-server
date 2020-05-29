#include "../headerFiles/response.h"

response* createEmptyResponse(string protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->statusCode = -1;
  resp->statusMessage.content = NULL;
  resp->protokol = protokol;
  resp->bTreeHeaders = NULL;
  resp->data = NULL;
  resp->dataSize = -1;
  resp->streaming = 0;
  resp->streamSize = -1;
  resp->file = NULL;

  addHeader(resp, "Server", "Lol3r-C/2.0");

  return resp;
}
