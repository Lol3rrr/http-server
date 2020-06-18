#ifndef REQUEST_H
#define REQUEST_H

#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "header.h"
#include "queryParams.h"
#include "logger.h"
#include "file.h"
#include "cross.h"

#define HTTP_BUFFER_SIZE 16 * 1024

typedef struct request {
  char* initialContent;
  string method;
  string path;
  string protokol;
  headers_t headers;
  queryParams_t params;
  string body;
} request;

request createEmptyRequest();
int resetRequest(request* reqPtr);

void print_request_debug(request* req);

// Returns 0 if worked
int parseRequest(char* headerPart, int headerLength, request* result);
int cleanRequest(request* reqPtr);

int readHTTP(c_socket socketFd, char** buffer);
int parseHead(char* message, int messageLength, request* reqPtr);

int receiveRequest(c_socket conFd, request* reqPtr);

#endif
