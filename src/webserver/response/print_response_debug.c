#include "../headerFiles/response.h"

void print_response_debug(response* respPtr) {
  if (debug == 0) {
    return;
  }

  logDebug("[Response] Printing Response: \n");
  logDebug("[Response] Statuscode: %d \n", respPtr->statusCode);
  logDebug("[Response] Statusmessage: %.*s \n", respPtr->statusMessage.length, respPtr->statusMessage.content);
  logDebug("[Response] Protokol: %.*s \n", respPtr->protokol.length, respPtr->protokol.content);
  logDebug("[Response] Headers: \n");

  printTree(respPtr->bTreeHeaders);
}
