#include "../headerFiles/response.h"

response* createEmptyResponse(char* protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->statusCode = -1;
  resp->statusMessage.content = NULL;
  resp->protokol.content = NULL;
  resp->headers = NULL;
  resp->data = NULL;
  resp->dataSize = -1;

  resp->headers = createEmptyHeaders();

  int protokolLength = strlen(protokol);
  string nString = {
    content: createEmptyCString(protokolLength),
    length: protokolLength
  };
  resp->protokol = nString;
  memcpy(resp->protokol.content, protokol, protokolLength);

  addHeader(resp, "Server", "Lol3r-C/0.1");

  return resp;
}
