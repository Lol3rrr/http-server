#include "../headerFiles/response.h"

response createEmptyResponse() {
  response resp;

  resp.statusCode = -1;
  resp.statusMessage.content = NULL;
  resp.statusMessage.needsFree = 0;
  resp.protokol.content = NULL;
  resp.protokol.needsFree = 0;
  resp.headerList = createKVList(HEADER_BUFFER);
  resp.headerResponseSize = 0;
  resp.data = NULL;
  resp.dataSize = -1;
  resp.streamingFd = NULL;
  resp.closeFile = 0;

  string serverKey = {
    .content = "Server",
    .length = 6,
    .needsFree = 0
  };
  string serverValue = {
    .content = "Lol3r-C/2.1",
    .length = 11,
    .needsFree = 0
  };
  addHeader(&resp, serverKey, serverValue);

  return resp;
}
