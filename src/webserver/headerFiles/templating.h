#ifndef TEMPLATING_H
#define TEMPLATING_H

#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "logger.h"
#include "file.h"

typedef struct {
  char* filePath;
} includeStatement;

int parseTemplate(char* rawContent, int contentLength, char** result);
int parseIncludeStatement(string* includeText, includeStatement** statement);

#endif
