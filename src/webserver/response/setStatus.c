#include "../headerFiles/response.h"

int setStatus(response* respPtr, int statusCode, char* statusMessage) {
  respPtr->statusCode = statusCode;
  respPtr->statusMessage = statusMessage;
}
