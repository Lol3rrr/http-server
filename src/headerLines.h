#ifndef HEADERLINES_H
#define HEADERLINES_H

#include <stdio.h>
#include <stdlib.h>

#include "general.h"

typedef struct node {
  char* line;
  struct node* next;
} headerLine_t;

void pushHeaderLine(headerLine_t* head, char* line);
void print_headerLine_debug(headerLine_t* head);
void cleanHeaderLines(headerLine_t* node);

#endif
