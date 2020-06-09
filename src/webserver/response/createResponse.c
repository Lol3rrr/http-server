#include "../headerFiles/response.h"

response createResponse(int statusCode, string statusMessage, string protokol) {
  string protokolStr = {
    .content = createEmptyCString(protokol.length),
    .length = protokol.length,
    .needsFree = 1
  };
  memcpy(protokolStr.content, protokol.content, protokol.length);

  response resp = createEmptyResponse();
  setResponse(&resp, protokolStr);

  resp.statusCode = statusCode;

  string nString = {
    .content = createEmptyCString(statusMessage.length),
    .length = statusMessage.length,
    .needsFree = 1
  };
  resp.statusMessage = nString;
  memcpy(resp.statusMessage.content, statusMessage.content, statusMessage.length);

  return resp;
}
