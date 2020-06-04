#include "../headerFiles/header.h"

void cleanHeader(headers_t* headers) {
  cleanKVList(headers->list);
}
