#include "../queryparams.h"

void benchParseQueryParams() {
  parseXQueryParamsBench(1);
  parseXQueryParamsBench(2);
  parseXQueryParamsBench(5);
  parseXQueryParamsBench(10);
  parseXQueryParamsBench(25);
  parseXQueryParamsBench(50);
  parseXQueryParamsBench(100);
}
