#include "../headerFiles/queryParams.h"

void cleanQueryParams(queryParams_t* params) {
  cleanKVNodes(params->kvNodes);

  free(params);
}
