#include "../headerFiles/response.h"

int setContentType(response* respPtr, char* contentType, int contentLength) {
  addHeader(respPtr, "Content-Type", contentType);

  char* str = (char*) malloc(12 * sizeof(char));
  str = itoa(contentLength, str);
  addHeader(respPtr, "Content-Length", str);

  free(str);

  return 0;
}
