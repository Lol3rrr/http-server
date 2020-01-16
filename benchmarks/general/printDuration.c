#include "../general.h"

void printDuration(char* category, char* name, double totalTime) {
  double duration = totalTime / RUNS;

  printf("[%s] %s: %f Micro-Seconds \n", category, name, duration);
}
