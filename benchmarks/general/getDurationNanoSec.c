#include "../general.h"

long int getDurationNanoSec(struct timespec startTime) {
  struct timespec endTime;
  timespec_get(&endTime, TIME_UTC);
  
  return (endTime.tv_nsec - startTime.tv_nsec);
}
