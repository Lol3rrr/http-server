#include "../general.h"

void printRawDuration(char* category, char* name, long int duration) {
  printf("[%s] %s: %ld Nano-Seconds \n", category, name, duration);
}
