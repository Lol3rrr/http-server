#include "../headerFiles/stats.h"

void addCounterByID(int counterID) {
  counter_t* tmpCounter = findCounterByID(counterID);
  if (tmpCounter == NULL) {
    return;
  }

  tmpCounter->count += 1;
}
