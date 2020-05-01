#include "../headerFiles/response.h"

response* createResponse(int statusCode, char* statusMessage, char* protokol) {
  response* resp = createEmptyResponse(protokol);

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
