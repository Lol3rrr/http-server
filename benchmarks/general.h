#ifndef BENCH_GENERAL_H
#define BENCH_GENERAL_H

#define RUNS 1000000

#include <stdio.h>
#include <time.h>

double getDurationMicroSec(clock_t start);

void printDuration(char* category, char* name, double totalTime);
void getAndPrintDuration(char* category, char* name, clock_t start);

#endif
