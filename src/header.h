#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "general.h"

int debug;

typedef struct headerNode {
  char* key;
  char* value;
  struct headerNode* next;
} headerNode_t;

void pushHeader(headerNode_t* head, char* key, char* value);
void print_header_debug(headerNode_t* head);
void cleanHeader(headerNode_t* head);
int getHeader(headerNode_t* head, char* key, headerNode_t** result);

int parseHeader(char* headerLine, char** keyPtr, char** valuePtr);
int createHeaderPair(headerNode_t* headerPtr, char** result);
int parseFirstLine(char* firstLine, char** methodPtr, char** pathPtr, char** protokolPtr);

#endif
