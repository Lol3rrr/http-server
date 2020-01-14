#include <stdio.h>

#include "header.h"
#include "request.h"

int main() {
  printf("Starting Benchmark \n");

  // Header Benchmarks
  firstLineBench();
  parseHeadersBench();

  // Request Benchmarks
  parseHeadBench();
  parseRequestBench();

  printf("Done \n");

  return 0;
}
