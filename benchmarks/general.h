#ifndef BENCH_GENERAL_H
#define BENCH_GENERAL_H

#define RUNS 10000

#include <stdio.h>
#include <time.h>

long int getDurationNanoSec(struct timespec start);

void printDuration(char* category, char* name, long int totalTime);
void getAndPrintDuration(char* category, char* name, clock_t start);

#endif
