#include "../headerFiles/header.h"

void print_header_debug(headers_t* headers) {
  if (isDebugEnabled() == 0) {
    return;
  }

  print_kv_nodes(headers->kvNodes.next);
}
