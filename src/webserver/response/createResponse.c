#include "../headerFiles/response.h"

response* createResponse(int statusCode, char* statusMessage, char* protokol) {
  response* resp = createEmptyResponse(protokol);

  resp->statusCode = statusCode;

  int statusLength = strlen(statusMessage);
  resp->statusMessage = createEmptyString(statusLength);
  memcpy(resp->statusMessage->content, statusMessage, statusLength);

  return resp;
}
