#include "../headerFiles/request.h"

int hasEmptyField(request* reqPtr) {
  if (reqPtr->method == NULL)
    return 1;

  if (reqPtr->path == NULL)
    return 1;

  if (reqPtr->protokol == NULL)
    return 1;

  if (reqPtr->headers->kvNodes == NULL)
    return 1;

  return 0;
}
