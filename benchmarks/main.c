#include <stdio.h>

#include "general.h"
#include "header.h"
#include "request.h"
#include "queryparams.h"
#include "response.h"
#include "keyValueList.h"
#include "server.h"
#include "sharedMap.h"

#include <benchmark/benchmark.h>

// General Benchmarks
BENCHMARK(BM_Itoa);

// Header Benchmarks
BENCHMARK(BM_ParseFirstLine);
BENCHMARK(BM_ParseHeaders)->Arg(1)->Arg(2)->Arg(5)->Arg(10)->Arg(25);

// Queryparams Benchmarks
BENCHMARK(BM_ParseQueryParams)->Arg(1)->Arg(2)->Arg(5)->Arg(10)->Arg(25);

// Response Benchmarks
BENCHMARK(BM_CreateHTTPHeaderPart)->Arg(1)->Arg(2)->Arg(5)->Arg(10);

// Server Benchmarks
BENCHMARK(BM_DeterminContentType);

// Shared Map Benchmarks
BENCHMARK(BM_CalculateHash)->Arg(5)->Arg(10)->Arg(25)->Arg(50);
BENCHMARK(BM_BucketIndex)->RangeMultiplier(2)->Range(32, 512);

// Key-Value-List Benchmarks
BENCHMARK(BM_AddKV)
  ->Args({0, 2})
  ->Args({0, 4})
  ->Args({0, 8})
  ->Args({0, 16})
  ->Args({0, 32})
  ->Args({10, 2})
  ->Args({10, 4})
  ->Args({10, 8})
  ->Args({10, 16})
  ->Args({10, 32});

BENCHMARK_MAIN();
