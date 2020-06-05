#include "../headerFiles/stats.h"

int counterToTypeStringLength(counter_t* counter) {
  int nameLength = strlen(counter->name);
  return 5 + 1 + nameLength + 1 + 7 + 1;
}