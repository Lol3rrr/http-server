#ifndef BENCH_QUERYPARAMS_H
#define BENCH_QUERYPARAMS_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/queryParams.h"

#include "general.h"

double parseQueryParamsBench(char* input);

void parseXQueryParamsBench(int count);

void benchParseQueryParams();

#endif
