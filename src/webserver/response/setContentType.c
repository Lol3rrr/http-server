#include "../headerFiles/response.h"

int setContentType(response* respPtr, char* contentType, int contentLength) {
  string typeKey = {
    .content = "Content-Type",
    .length = 12
  };
  string typeValue = {
    .content = contentType,
    .length = strlen(contentType)
  };
  addHeader(respPtr, typeKey, typeValue);

  char* str = (char*) malloc(12 * sizeof(char));
  str = itoa(contentLength, str);

  string lengthKey = {
    .content = "Content-Length",
    .length = 14
  };
  string lengthValue = {
    .content = str,
    .length = strlen(str)
  };
  addHeader(respPtr, lengthKey, lengthValue);

  free(str);

  return 0;
}
