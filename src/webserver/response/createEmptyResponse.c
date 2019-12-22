#include "../headerFiles/response.h"

response* createEmptyResponse(char* protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->headers = createEmptyHeaders();

  int protokolLength = strlen(protokol);
  resp->protokol = createEmptyString(protokolLength);
  strncpy(resp->protokol->content, protokol, protokolLength);

  resp->dataSize = -1;

  addHeader(resp, "Server", "Lol3r-C/0.1");

  return resp;
}
