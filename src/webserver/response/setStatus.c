#include "../headerFiles/response.h"

int setStatus(response* respPtr, int statusCode, char* statusMessage) {
  respPtr->statusCode = statusCode;

  int statusLength = strlen(statusMessage);
  respPtr->statusMessage = createEmptyString(statusLength);
  strncpy(respPtr->statusMessage->content, statusMessage, statusLength);
}
