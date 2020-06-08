#include "../headerFiles/stats.h"

int incCounterByName(string name, counter_t** registry) {
  counter_t* tmpCounter = findCounterByName(name, registry);
  if (tmpCounter == NULL) {
    return 0;
  }

  tmpCounter->count += 1;

  return 1;
}
