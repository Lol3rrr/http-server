#ifndef TEMPLATING_H
#define TEMPLATING_H

#include <stdio.h>
#include <stdlib.h>

#include "../headerFiles/general.h"
#include "../headerFiles/file.h"

typedef struct {
  char* filePath;
} includeStatement;

int parseTemplate(char* rawContent, int contentLength, char** result);
int parseIncludeStatement(char* includeText, int length, includeStatement** statement);

#endif
