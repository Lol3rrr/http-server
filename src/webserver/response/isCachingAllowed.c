#include "../headerFiles/response.h"

int isCachingAllowed(request* reqPtr) {
  if (isCachingEnabled() == 0) {
    return 0;
  }

  headerNode_t* result;
  int worked = getHeader(reqPtr->headers, "Cache-Control", &result);
  if (worked == 0) {
    char* value = result->value;
    if (strcmp(value, "max-age=0") == 0) {
      return 0;
    }

    if (strcmp(value, "no-cache") == 0) {
      return 0;
    }

    if (strcmp(value, "no-store") == 0) {
      return 0;
    }
  }

  return 1;
}
