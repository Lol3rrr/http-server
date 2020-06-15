#include "../headerFiles/response.h"

int setContentType(response* respPtr, string contentType, int contentLength) {
  string typeKey = {
    .content = "Content-Type",
    .length = 12,
    .needsFree = 0
  };
  string typeValue = {
    .content = contentType.content,
    .length = contentType.length,
    .needsFree = 0
  };
  addHeader(respPtr, typeKey, typeValue);

  char str[12];
  int contentLengthSize = citoa(contentLength, str);

  string lengthKey = {
    .content = "Content-Length",
    .length = 14,
    .needsFree = 0
  };
  string lengthValue = {
    .content = str,
    .length = contentLengthSize,
    .needsFree = 0
  };
  addHeader(respPtr, lengthKey, lengthValue);

  return 0;
}
