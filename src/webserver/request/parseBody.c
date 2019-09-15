#include "../headerFiles/request.h"

int parseBody(char* rawRequest, int rawLength, char** result) {
  int length = -1;

  int startOfBody = findStrAfter(rawRequest, "\r\n\r\n", -1, -1, 4);
  if (startOfBody == -1)
    return -1;

  startOfBody += 4;
  length = rawLength - startOfBody;

  if (length <= 0)
    return -1;

  char* body = createEmptyCString(length);
  for (int i = 0; i < length; i++) {
    int index = i + startOfBody;

    body[i] = rawRequest[index];
  }

  (*result) = body;

  return length;
}
