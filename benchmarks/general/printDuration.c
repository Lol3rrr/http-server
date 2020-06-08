#include "../general.h"

void printDuration(char* category, char* name, long int totalTime) {
  long int duration = totalTime / RUNS;

  printf("[%s] %s: %ld Nano-Seconds \n", category, name, duration);
}
