#include "../headerFiles/header.h"

int createHeaderPair(headers_t* headers, char** result) {
  clock_t startTime = clock();

  return createKVPair(headers->kvNodes, result);
}
