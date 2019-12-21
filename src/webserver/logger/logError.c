#include "../headerFiles/logger.h"

void logError(const char *fmt, ...) {
  char buffer[4096];
  va_list args;
  va_start(args, fmt);
  int rc = vsnprintf(buffer, sizeof(buffer), fmt, args);
  va_end(args);

  printf("[Error] %s", buffer);

  incCounterByName("total_errors", &counterRegistry);
}
