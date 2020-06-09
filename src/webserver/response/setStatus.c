#include "../headerFiles/response.h"

int setStatus(response* respPtr, int statusCode, string statusMessage) {
  if (statusCode < 100 || statusCode > 999) {
    return -1;
  }

  respPtr->statusCode = statusCode;

  string nString = {
    .content = createEmptyCString(statusMessage.length),
    .length = statusMessage.length,
    .needsFree = 1
  };
  respPtr->statusMessage = nString;
  memcpy(respPtr->statusMessage.content, statusMessage.content, statusMessage.length);

  return 0;
}
