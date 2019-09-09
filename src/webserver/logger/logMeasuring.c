#include "../headerFiles/logger.h"

void logMeasuring(const char *fmt, ...) {
  char buffer[4096];
  va_list args;
  va_start(args, fmt);
  int rc = vsnprintf(buffer, sizeof(buffer), fmt, args);
  va_end(args);

  printf("[Measuring] %s", buffer);
}
