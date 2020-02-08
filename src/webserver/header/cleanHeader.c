#include "../headerFiles/header.h"

void cleanHeader(headers_t* headers) {
  if (headers->kvNodes == NULL)
    return;

  cleanKVNodes(headers->kvNodes);
}
