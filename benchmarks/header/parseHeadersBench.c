#include "../header.h"

void parseHeadersBench() {
  char* line = "Accept: text/html\r\nDomain: test\r\n\r\n";
  int lineLength = strlen(line);

  int end;
  headers_t* headers;


  // Start the actual Benchmark
  clock_t start = clock();

  for (int i = 0; i < RUNS; i++) {
    headers = parseHeaders(line, lineLength, &end);
  }

  getAndPrintDuration("Header", "Parse Headers", start);
}
