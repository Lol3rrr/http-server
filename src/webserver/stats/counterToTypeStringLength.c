#include "../headerFiles/stats.h"

int counterToTypeStringLength(counter_t* counter) {
  return 5 + 1 + counter->name.length + 1 + 7 + 1;
}