#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "general.h"
#include "logger.h"
#include "keyValueList.h"

#define MAX_METHOD_LENGTH 7
#define HEADER_BUFFER 25

typedef struct headers {
  kvList_t list;
} headers_t;

headers_t createEmptyHeaders();

// Adds a new Header
// Returns the Node of the new Header
kvNode_t* pushHeader(headers_t* headers, string key, string value);
// Prints all the Headers, mainly used for debugging
void print_header_debug(headers_t* headers);
// Resets the headers to their initial state as if it were
// a new instance, but tries to keep as many ressources as possible.
void resetHeader(headers_t* headers);
// Frees all the Headers and the Data they hold
void cleanHeader(headers_t* headers);
// Searches for a Header that matches the given Key
// Returns
// < 0: An error occured
// 0: Worked
int getHeader(headers_t* headers, char* key, kvNode_t** result);

// Parses the First line of a request
// Returns
// -1: if a problem occured
// -2: if a '..' has been found
// otherwise: the last index of the first Line
int parseFirstLine(char* line, int length, string* method, string* pathPtr, string* protokolPtr);
// Parses the Headers of a request
// Returns
// 0<: Error
// >0: The headers end
int parseHeaders(char* headers, int headersLength, headers_t* result);

#endif
