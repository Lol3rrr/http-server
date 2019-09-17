#include "../headerFiles/response.h"

int addHeader(response* respPtr, char* key, char* value) {
  pushHeader(respPtr->headers, key, value);

  return 0;
}
