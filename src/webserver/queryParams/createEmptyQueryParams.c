#include "../headerFiles/queryParams.h"

queryParams_t createEmptyQueryParams() {
  queryParams_t result = {
    .exists = 0,
    .list = createKVList(QUERYPARAMS_BUFFER)
  };

  return result;
}