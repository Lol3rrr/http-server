#include "../general.h"

void getAndPrintDuration(char* category, char* name, clock_t start) {
  clock_t clockDuration = clock() - start;

  double duration = (double) (clockDuration) / CLOCKS_PER_SEC * 1000 * 1000 / RUNS;
  printf("[%s] -- %s --\n", category, name);
  printf("[%s]  Average: %f Micro-Seconds \n", category, duration);
}
