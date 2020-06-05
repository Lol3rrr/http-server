#include "../headerFiles/stats.h"

int counterToStringLength(counter_t* counter) {
  int nameLength = strlen(counter->name);
  int valueLength = 12;

  return nameLength + 1 + valueLength + 1;
}