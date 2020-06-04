#include "../headerFiles/response.h"

response* createEmptyResponse(string protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->statusCode = -1;
  resp->statusMessage.content = NULL;
  resp->protokol = protokol;
  resp->headerList = createKVList(HEADER_BUFFER);
  resp->data = NULL;
  resp->dataSize = -1;
  resp->streaming = 0;
  resp->streamSize = -1;
  resp->file.length = -1;

  string serverKey = {
    .content = "Server",
    .length = 6
  };
  string serverValue = {
    .content = "Lol3r-C/2.1",
    .length = 11
  };
  addHeader(resp, serverKey, serverValue);

  return resp;
}
