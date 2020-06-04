#include "../headerFiles/request.h"

int hasEmptyField(request* reqPtr) {
  if (reqPtr->path.content == NULL)
    return 1;

  if (reqPtr->protokol.content == NULL)
    return 1;

  return 0;
}
