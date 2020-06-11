#ifndef SHARED_MAP_BENCH_H
#define SHARED_MAP_BENCH_H

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../src/webserver/headerFiles/sharedMap.h"

#include "general.h"

void calculateHashBench();

long int benchCalculateHash(char* str);

void getBucketIndexBench();

#endif
