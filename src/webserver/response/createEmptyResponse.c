#include "../headerFiles/response.h"

response* createEmptyResponse(char* protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->headers = NULL;

  int protokolLength = getStringLength(protokol);
  resp->protokol = createEmptyCString(protokolLength);
  strncpy(resp->protokol, protokol, protokolLength);

  resp->dataSize = -1;

  addHeader(resp, "Server", "Lol3r-C/0.1");

  return resp;
}
