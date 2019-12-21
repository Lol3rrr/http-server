#ifndef REQUEST_H
#define REQUEST_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <time.h>

#include "general.h"
#include "headerLines.h"
#include "header.h"
#include "queryParams.h"
#include "logger.h"
#include "file.h"

typedef struct request {
  string* method;
  string* path;
  string* protokol;
  headers_t* headers;
  queryParams_t* params;
  char* body;
  int bodyLength;
} request;

void print_request_debug(request* req);

// Returns 0 if worked
int parseRequest(headerLine_t* headerLines, request** reqPtr);
int cleanRequest(request* reqPtr);

headers_t* parseHeaders(headerLine_t* headerLines, string** method, string** path, string** protokol);
int readHTTP(int socketFd, char** buffer, int bufferSize);
headerLine_t* splitHTTPRequest(char** buffer, int bufferLength);
int parseBody(char* rawRequest, int rawLength, char** result);

int receiveRequest(int conFd, request** reqPtr);

int hasEmptyField(request* reqPtr);

#endif
