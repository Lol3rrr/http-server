#include "../headerFiles/stats.h"

int incCounterByID(int counterID, counter_t** registry) {
  counter_t* tmpCounter = findCounterByID(counterID, registry);
  if (tmpCounter == NULL) {
    return 0;
  }

  tmpCounter->count += 1;

  return 1;
}
