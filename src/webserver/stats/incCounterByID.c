#include "../headerFiles/stats.h"

void incCounterByID(int counterID) {
  counter_t* tmpCounter = findCounterByID(counterID);
  if (tmpCounter == NULL) {
    return;
  }

  tmpCounter->count += 1;
}
