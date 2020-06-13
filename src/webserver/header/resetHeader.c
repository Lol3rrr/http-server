#include "../headerFiles/header.h"

void resetHeader(headers_t* headers) {
  resetKVList(&(headers->list));
}