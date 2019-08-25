#ifndef RESPONSE_H
#define RESPONSE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "general.h"
#include "header.h"
#include "request.h"

typedef struct response {
  int statusCode;
  char* statusMessage;
  char* protokol;
  headerNode_t* headers;
  char* data;
  int dataSize;
} response;

typedef struct headerPartNode {
  int length;
  char* content;
  struct headerPartNode* next;
} headerPartNode_t;

void pushHeaderNodePart(headerPartNode_t* head, char* content, int length);
void cleanHeaderNodePart(headerPartNode_t* node);


int addHeader(response* respPtr, char* key, char* value);

int setContent(response* respPtr, char* contentType, int contentLength);
int setData(response* respPtr, char* data, int size);
int setCache(response* respPtr, request* reqPtr, int cacheTime);

void print_response_debug(response* respPtr);

response* createResponse(int statusCode, char* statusMessage, char* protokol);
int cleanResponse(response* respPtr);

int createFirstLine(response* respPtr, char** result);

int createHTTPHeaderPart(response* respPtr, char* spacer, char** result);

int createHTTPHead(response* respPtr, char** result);
int createHTTPResponse(response* respPtr, char** result);

#endif
