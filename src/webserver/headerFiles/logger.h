#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <stdarg.h>

#include "general.h"

void logInfo(const char *fmt, ...);
void logError(const char *fmt, ...);
void logDebug(const char *fmt, ...);
void logMeasuring(const char *fmt, ...);

#endif
