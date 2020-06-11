#include <stdio.h>

#include "header.h"
#include "request.h"
#include "queryparams.h"
#include "response.h"
#include "keyValueList.h"
#include "server.h"
#include "sharedMap.h"

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

  // Server Benchmarks
  determinContentTypeBench();

  // Hash-Map Benchmarks
  calculateHashBench();
  getBucketIndexBench();

  printf("Done \n");

  return 0;
}
