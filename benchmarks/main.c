#include <stdio.h>


#include "header.h"
#include "request.h"
#include "queryparams.h"
#include "response.h"
#include "keyValueList.h"
#include "server.h"
#include "sharedMap.h"

#include <benchmark/benchmark.h>

// Header Benchmarks
BENCHMARK(BM_ParseFirstLine);
BENCHMARK(BM_ParseHeaders)->Arg(1)->Arg(2)->Arg(5)->Arg(10)->Arg(25);

// Queryparams Benchmarks
BENCHMARK(BM_ParseQueryParams)->Arg(1)->Arg(2)->Arg(5)->Arg(10)->Arg(25);

// Response Benchmarks
BENCHMARK(BM_CreateHTTPHeaderPart)->Arg(1)->Arg(2)->Arg(5)->Arg(10);

// Server Benchmarks
BENCHMARK(BM_DeterminContentType);

BENCHMARK_MAIN();
