#include <stdlib.h>

#include "../src/webserver/headerFiles/request.h"

int LLVMFuzzerTestOneInput(const char *Data, int size) {
  char* data = (char*) malloc(size * sizeof(char));
  memcpy(data, Data, size);
  request *tmp;
  int result = parseRequest(data, size, &tmp);
  if (result == 0) {
    cleanRequest(tmp);
    free(tmp);
  }

  free(data);

  return 0;
}