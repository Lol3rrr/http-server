#include "../headerFiles/logger.h"

void logInfo(const char *fmt, ...) {
  char buffer[4096];
  va_list args;
  va_start(args, fmt);
  int rc = vsnprintf(buffer, sizeof(buffer), fmt, args);
  va_end(args);

  printf("[Info] %s", buffer);
}
