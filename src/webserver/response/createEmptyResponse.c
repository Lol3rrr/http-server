#include "../headerFiles/response.h"

response* createEmptyResponse(char* protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->statusCode = -1;
  resp->statusMessage = NULL;
  resp->protokol = NULL;
  resp->headers = NULL;
  resp->data = NULL;
  resp->dataSize = -1;

  resp->headers = createEmptyHeaders();

  int protokolLength = strlen(protokol);
  resp->protokol = createEmptyString(protokolLength);
  memcpy(resp->protokol->content, protokol, protokolLength);

  addHeader(resp, "Server", "Lol3r-C/0.1");

  return resp;
}
