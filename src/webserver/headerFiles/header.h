#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "general.h"
#include "logger.h"
#include "keyValueList.h"

#define MAX_METHOD_LENGTH 7

int debug;

typedef struct headers {
  kvNode_t* kvNodes;
} headers_t;

headers_t* createEmptyHeaders();

kvNode_t* pushHeader(headers_t* headers, string* key, string* value);
void print_header_debug(headers_t* headers);
void cleanHeader(headers_t* headers);
int getHeader(headers_t* headers, char* key, kvNode_t** result);

int parseFirstLine(char* line, int length, char (*methodPtr)[MAX_METHOD_LENGTH + 1], string* pathPtr, string* protokolPtr);
int parseHeaders(char* headers, int headersLength, headers_t* result, int* headerEnd);

#endif
