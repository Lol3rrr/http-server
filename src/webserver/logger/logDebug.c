#include "../headerFiles/logger.h"

void logDebug(const char *fmt, ...) {
  if (!isDebugEnabled())
    return;


  char buffer[4096];
  va_list args;
  va_start(args, fmt);
  int rc = vsnprintf(buffer, sizeof(buffer), fmt, args);
  va_end(args);

  printf("[Debug] %s", buffer);
}
