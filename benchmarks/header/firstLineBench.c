#include "../header.h"

void firstLineBench() {
  char* lineInput = "GET / HTTP/1.1\r\n";
  int lineLength = strlen(lineInput);

  string method;
  string path;
  string protokol;


  // Start the actual Benchmark
  double total = 0.0;

  for (int i = 0; i < RUNS; i++) {
    clock_t start = clock();

    parseFirstLine(lineInput, lineLength, &method, &path, &protokol);

    double cDuration = getDurationMicroSec(start);
    total = total + cDuration;

    if (method.content != NULL && method.needsFree)
      free(method.content);
    if (path.content != NULL && path.needsFree)
      free(path.content);
    if (protokol.content != NULL && protokol.needsFree)
      free(protokol.content);
  }

  printDuration("Header", "Parse First Line", total);
}
