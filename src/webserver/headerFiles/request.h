#ifndef REQUEST_H
#define REQUEST_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <time.h>

#include "general.h"
#include "header.h"
#include "queryParams.h"
#include "logger.h"
#include "file.h"

typedef struct request {
  char* initialContent;
  string method;
  string path;
  string protokol;
  headers_t headers;
  queryParams_t params;
  string body;
} request;

void print_request_debug(request* req);

// Returns 0 if worked
int parseRequest(char* headerPart, int headerLength, request** result);
int cleanRequest(request* reqPtr);

int readHTTP(int socketFd, char** buffer);
int parseHead(char* message, int messageLength, request* reqPtr);

int receiveRequest(int conFd, request** reqPtr);

int hasEmptyField(request* reqPtr);

#endif
