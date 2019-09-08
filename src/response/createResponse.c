#include "../response.h"

response* createResponse(int statusCode, char* statusMessage, char* protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->headers = NULL;

  int protokolLength = getLength(protokol);
  resp->protokol = createEmptyCString(protokolLength);
  strncpy(resp->protokol, protokol, protokolLength);

  resp->statusCode = statusCode;
  resp->statusMessage = statusMessage;

  addHeader(resp, "Server", "Lol3r-C/0.1");

  return resp;
}
