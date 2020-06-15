#ifndef BENCH_GENERAL_H
#define BENCH_GENERAL_H

#define RUNS 10000

#include <stdio.h>
#include <time.h>

#include <benchmark/benchmark.h>

#include "../src/webserver/headerFiles/general.h"

long int getDurationNanoSec(struct timespec start);

void printDuration(char* category, char* name, long int totalTime);
void printRawDuration(char* category, char* name, long int duration);
void getAndPrintDuration(char* category, char* name, clock_t start);


void BM_Itoa(benchmark::State& state) {
  int number = 200;
  char result[12];

  for (auto _ : state) {
    citoa(number, result);
  }
}

#endif
