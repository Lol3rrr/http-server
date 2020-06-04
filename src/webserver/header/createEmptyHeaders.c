#include "../headerFiles/header.h"

headers_t createEmptyHeaders() {
  headers_t result;

  result.list = createKVList(HEADER_BUFFER);

  return result;
}
