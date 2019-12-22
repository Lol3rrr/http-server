#ifndef HEADERLINES_H
#define HEADERLINES_H

#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "logger.h"

typedef struct node {
  string* line;
  struct node* next;
} headerLine_t;

void pushHeaderLine(headerLine_t* head, string* line);
void print_headerLine_debug(headerLine_t* head);
void cleanHeaderLines(headerLine_t* node);

#endif
