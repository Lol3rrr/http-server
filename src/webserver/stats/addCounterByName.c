#include "../headerFiles/stats.h"

void addCounterByName(char* name) {
  counter_t* tmpCounter = findCounterByName(name);
  if (tmpCounter == NULL) {
    return;
  }

  tmpCounter->count += 1;
}
