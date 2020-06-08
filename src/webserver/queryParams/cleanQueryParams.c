#include "../headerFiles/queryParams.h"

void cleanQueryParams(queryParams_t params) {
  cleanKVList(params.list);
}
