#include "../headerFiles/response.h"

response createEmptyResponse() {
  response resp;

  resp.statusCode = -1;
  resp.statusMessage.content = NULL;
  resp.protokol.content = NULL;
  resp.headerList = createKVList(HEADER_BUFFER);
  resp.data = NULL;
  resp.dataSize = -1;

  string serverKey = {
    .content = "Server",
    .length = 6
  };
  string serverValue = {
    .content = "Lol3r-C/2.1",
    .length = 11
  };
  addHeader(&resp, serverKey, serverValue);

  return resp;
}
