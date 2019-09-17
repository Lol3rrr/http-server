#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "general.h"
#include "logger.h"
#include "keyValueList.h"

int debug;

typedef struct headers {
  kvNode_t* kvNodes;
} headers_t;

headers_t* createEmptyHeaders();

void pushHeader(headers_t* headers, char* key, char* value);
void print_header_debug(headers_t* headers);
void cleanHeader(headers_t* headers);
int getHeader(headers_t* headers, char* key, kvNode_t** result);

int parseHeader(char* headerLine, char** keyPtr, char** valuePtr);
int parseFirstLine(char* firstLine, char** methodPtr, char** pathPtr, char** protokolPtr);

#endif
