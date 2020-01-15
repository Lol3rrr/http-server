#include <stdio.h>

#include "header.h"
#include "request.h"
#include "queryparams.h"

int main() {
  printf("Starting Benchmark \n");

  // Header Benchmarks
  firstLineBench();
  parseHeadersBench();

  // Request Benchmarks
  parseHeadBench();
  parseRequestBench();

  // Queryparams Benchmarks
  parseQueryParamsBench();

  printf("Done \n");

  return 0;
}
