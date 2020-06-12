#include "../headerFiles/response.h"

int digits10(int number) {
  int result = 1;
  for (;;) {
    if (number < 10) return result;
    if (number < 100) return result + 1;
    if (number < 1000) return result + 2;
    if (number < 10000) return result + 3;

    number /= 10000;
    result += 4;
  }
}

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
  itoa(contentLength, str);

  string lengthKey = {
    .content = "Content-Length",
    .length = 14,
    .needsFree = 0
  };
  string lengthValue = {
    .content = str,
    .length = digits10(contentLength),
    .needsFree = 0
  };
  addHeader(respPtr, lengthKey, lengthValue);

  return 0;
}
