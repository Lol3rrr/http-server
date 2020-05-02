#include <stdio.h>

#include "header.h"
#include "request.h"
#include "queryparams.h"
#include "response.h"
#include "keyValueList.h"
#include "binaryHeaderTree.h"

int main() {
  printf("Starting Benchmark \n");

  // Header Benchmarks
  firstLineBench();
  benchParseHeader();

  // Request Benchmarks
  parseHeadBench();
  parseRequestBench();

  // Queryparams Benchmarks
  benchParseQueryParams();

  // Response Benchmarks
  createHTTPHeaderPartBench();

  // Key-Value List Benchmarks
  benchAddKV();

  // Binary Header Tree Benchmarks
  benchAddTreeHeader();

  printf("Done \n");

  return 0;
}
