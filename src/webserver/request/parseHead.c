#include "../headerFiles/request.h"

int parseHead(char* message, int messageLength, request* reqPtr) {
  int firstLineEnd = parseFirstLine(message, messageLength, &(reqPtr->method), &(reqPtr->path), &(reqPtr->protokol));
  if (firstLineEnd < 0) {
    return firstLineEnd;
  }

  char* headers = message + firstLineEnd;
  int headersLength = messageLength - firstLineEnd;

  int headerEnd = -1;
  headers_t* head = parseHeaders(headers, headersLength, &headerEnd);

  reqPtr->headers = head;

  return headerEnd;
}
