#include "../request.h"

void parseHeadBench() {
  char* lineInput = "GET / HTTP/1.1\r\nAccept: text/html\r\nDomain: test\r\n\r\n";
  int lineLength = strlen(lineInput);

  request tmp;


  // Start the actual Benchmark
  clock_t start = clock();

  for (int i = 0; i < RUNS; i++) {
    parseHead(lineInput, lineLength, &tmp);
  }

  getAndPrintDuration("Request", "Parse Head", start);
}
