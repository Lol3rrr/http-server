#include "../headerFiles/header.h"

void cleanHeader(headers_t* headers) {
  cleanKVNodes(headers->kvNodes);

  free(headers);
}
