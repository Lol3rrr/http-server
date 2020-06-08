#include "../headerFiles/stats.h"

int counterToStringLength(counter_t* counter) {
  int valueLength = 12;

  return counter->name.length + 1 + valueLength + 1;
}