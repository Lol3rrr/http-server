#ifndef BENCH_QUERYPARAMS_H
#define BENCH_QUERYPARAMS_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/queryParams.h"

#include "general.h"

double parseQueryParamsBench(char* input);

void parse1QueryParamsBench();
void parse2QueryParamsBench();
void parse5QueryParamsBench();
void parse10QueryParamsBench();

void benchParseQueryParams();

#endif
