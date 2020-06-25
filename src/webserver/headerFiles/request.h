#ifndef REQUEST_H
#define REQUEST_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

#include "general.h"
#include "header.h"
#include "queryParams.h"
#include "logger.h"
#include "file.h"

#define HTTP_BUFFER_SIZE 16 * 1024

typedef struct request {
  char* initialContent;
  int initalBufferSize;
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
int parseRequest(request* req, int headerLength);
int cleanRequest(request* reqPtr);

int readHTTP(int socketFd, char** buffer, int preBufferLength, int* resultBufferLength);
int parseHead(char* message, int messageLength, request* reqPtr);

int receiveRequest(int conFd, request* reqPtr);

#endif
