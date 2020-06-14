#include "../headerFiles/queryParams.h"

void resetQueryParams(queryParams_t* params) {
  if (params->exists)
    return

  resetKVList(&(params->list));
}