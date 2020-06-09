#ifndef BENCH_KV_H
#define BENCH_KV_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/keyValueList.h"

#include "general.h"

clock_t addKVBench(int pairs, string* keys, string* values);
void addXKVsBench(int count);

void benchAddKV();

#endif
