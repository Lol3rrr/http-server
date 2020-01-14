#include "../general.h"

double getDurationMicroSec(clock_t start) {
  clock_t clockDuration = clock() - start;

  double duration = (double) (clockDuration) / CLOCKS_PER_SEC * 1000 * 1000;

  return duration;
}
