#include "../headerFiles/stats.h"

int incCounterByName(char* name, counter_t** registry) {
  counter_t* tmpCounter = findCounterByName(name, registry);
  if (tmpCounter == NULL) {
    return 0;
  }

  printf("[%p] Old Value: '%d' [%p] \n", tmpCounter, tmpCounter->count, &(tmpCounter->count));
  tmpCounter->count += 1;
  printf("[%p] New Value: '%d' [%p] \n", tmpCounter, tmpCounter->count, &(tmpCounter->count));

  return 1;
}
