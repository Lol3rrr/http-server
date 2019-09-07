#include "../response.h"

void print_response_debug(response* respPtr) {
  if (debug == 0) {
    return;
  }

  printf("[Debug][Response] Printing Response: \n");
  printf("[Debug][Response] Statuscode: %d \n", respPtr->statusCode);
  printf("[Debug][Response] Statusmessage: %s \n", respPtr->statusMessage);
  printf("[Debug][Response] Protokol: %s \n", respPtr->protokol);
  printf("[Debug][Response] Headers: \n");
  print_header_debug(respPtr->headers);
}
