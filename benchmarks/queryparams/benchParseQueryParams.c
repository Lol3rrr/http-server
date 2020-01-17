#include "../queryparams.h"

void benchParseQueryParams() {
  parse1QueryParamsBench();
  parse2QueryParamsBench();
  parse5QueryParamsBench();
  parse10QueryParamsBench();
}
