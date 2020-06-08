#ifndef BENCH_RESPONSE_H
#define BENCH_RESPONSE_H

#include <time.h>
#include <stdio.h>
#include <string.h>

#include "../src/webserver/headerFiles/general.h"
#include "../src/webserver/headerFiles/response.h"
#include "../src/webserver/headerFiles/header.h"

#include "general.h"

void createHTTPHeaderPartBench();

clock_t benchCreateHTTPHeaderPart(response* respPtr);
void createHTTPHeaderPartBench_1Header();
void createHTTPHeaderPartBench_2Header();
void createHTTPHeaderPartBench_5Header();
void createHTTPHeaderPartBench_10Header();

#endif
