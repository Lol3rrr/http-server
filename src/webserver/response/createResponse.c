#include "../headerFiles/response.h"

response* createResponse(int statusCode, char* statusMessage, char* protokol) {
  int protokolLength = strlen(protokol);
  string protokolStr = {
    .content = createEmptyCString(protokolLength),
    .length = protokolLength,
    .needsFree = 1
  };
  memcpy(protokolStr.content, protokol, protokolLength);

  response* resp = createEmptyResponse(protokolStr);

  resp->statusCode = statusCode;

  int statusLength = strlen(statusMessage);
  string nString = {
    .content = createEmptyCString(statusLength),
    .length = statusLength
  };
  resp->statusMessage = nString;
  memcpy(resp->statusMessage.content, statusMessage, statusLength);

  return resp;
}
