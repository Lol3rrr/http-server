#ifndef HEADERLINES_H
#define HEADERLINES_H

#include <stdio.h>
#include <stdlib.h>

#include "general.h"

typedef struct node {
  char* line;
  struct node* next;
} node_t;

void pushHeaderLine(node_t* head, char* line);
void print_headerLine_debug(node_t* head);
void cleanHeaderLines(node_t* node);

#endif
