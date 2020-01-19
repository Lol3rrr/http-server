#include "../headerFiles/response.h"

int setStatus(response* respPtr, int statusCode, char* statusMessage) {
  respPtr->statusCode = statusCode;

  int statusLength = strlen(statusMessage);
  string nString = {
    content: createEmptyCString(statusLength),
    length: statusLength
  };
  respPtr->statusMessage = nString;
  memcpy(respPtr->statusMessage.content, statusMessage, statusLength);
}
