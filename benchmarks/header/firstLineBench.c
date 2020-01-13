#include "../header.h"

#define RUNS 1000000

void firstLineBench() {
  clock_t start = clock();

  char* lineInput = "GET / HTTP/1.1\r\n";
  int lineLength = strlen(lineInput);

  string method;
  string path;
  string protokol;
  for (int i = 0; i < RUNS; i++) {
    parseFirstLine(lineInput, lineLength, &method, &path, &protokol);
  }

  clock_t clockDuration = clock() - start;

  double duration = (double) (clockDuration) / CLOCKS_PER_SEC * 1000 * 1000 / RUNS;
  printf("-- Parse First Line --\n");
  printf("Average: %f Micro-Seconds \n", duration);
}
