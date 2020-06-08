#include "../header.h"

void firstLineBench() {
  char* lineInput = "GET / HTTP/1.1\r\n";
  int lineLength = strlen(lineInput);

  string method;
  string path;
  string protokol;


  // Start the actual Benchmark
  long int total = 0;

  for (int i = 0; i < RUNS; i++) {
    struct timespec startTime;
    timespec_get(&startTime, TIME_UTC);

    parseFirstLine(lineInput, lineLength, &method, &path, &protokol);

    total = total + getDurationNanoSec(startTime);

    cleanString(method);
    cleanString(path);
    cleanString(protokol);
  }

  printDuration("Header", "Parse First Line", total);
}
