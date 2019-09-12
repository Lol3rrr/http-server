#include "../headerFiles/response.h"

response* createResponse(int statusCode, char* statusMessage, char* protokol) {
  response* resp = createEmptyResponse(protokol);

  resp->statusCode = statusCode;
  resp->statusMessage = statusMessage;

  return resp;
}
