#include "../headerFiles/queryParams.h"

void resetQueryParams(queryParams_t* params) {
  params->exists = 0;
  resetKVList(&(params->list));
}