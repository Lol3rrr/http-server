#include "../general.h"

void printDuration(char* category, char* name, double totalTime) {
  double duration = totalTime / RUNS;
  
  printf("[%s] -- %s --\n", category, name);
  printf("[%s]  Average: %f Micro-Seconds \n", category, duration);
}
