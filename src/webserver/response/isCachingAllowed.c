#include "../headerFiles/response.h"

int isCachingAllowed(request* reqPtr) {
  if (isCachingEnabled() == 0) {
    return 0;
  }

  kvNode_t* result;
  int worked = getHeader(&(reqPtr->headers), "Cache-Control", &result);
  if (worked == 0) {
    if (strncmp(result->value.content, "max-age=0", result->value.length) == 0) {
      return 0;
    }

    if (strncmp(result->value.content, "no-cache", result->value.length) == 0) {
      return 0;
    }

    if (strncmp(result->value.content, "no-store", result->value.length) == 0) {
      return 0;
    }
  }

  return 1;
}
