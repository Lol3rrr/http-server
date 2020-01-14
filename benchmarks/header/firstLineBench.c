#include "../header.h"

void firstLineBench() {
  char* lineInput = "GET / HTTP/1.1\r\n";
  int lineLength = strlen(lineInput);

  string method;
  string path;
  string protokol;


  // Start the actual Benchmark
  clock_t start = clock();

  for (int i = 0; i < RUNS; i++) {
    parseFirstLine(lineInput, lineLength, &method, &path, &protokol);
  }

  getAndPrintDuration("Parse First Line", start);
}
