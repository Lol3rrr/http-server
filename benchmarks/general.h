#ifndef BENCH_GENERAL_H
#define BENCH_GENERAL_H

#define RUNS 1000000

#include <stdio.h>
#include <time.h>

void getAndPrintDuration(char* category, char* name, clock_t start);

#endif
