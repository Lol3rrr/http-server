#ifndef BENCH_HEADER_H
#define BENCH_HEADER_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/header.h"

#include "general.h"

void firstLineBench();
clock_t parseHeadersBench(char* input);

void parseXHeadersBench(int count);

void benchParseHeader();

#endif
