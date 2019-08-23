#ifndef REQUEST_H
#define REQUEST_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

#include "general.h"
#include "headerLines.h"
#include "header.h"

typedef struct request {
  char* method;
  char* path;
  char* protokol;
  headerNode_t* headers;
} request;

void print_request_debug(request* req);

// Returns 0 if worked
int parseRequest(node_t* headerLines, request** reqPtr);
int cleanRequest(request* reqPtr);

int readHTTP(int socketFd, char** buffer, int bufferSize);
node_t* splitHTTPRequest(char** buffer, int bufferLength);

int receiveRequest(int conFd, request** reqPtr);

#endif
