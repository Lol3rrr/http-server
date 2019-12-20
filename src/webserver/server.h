#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <signal.h>

// Socket stuff
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "headerFiles/stats.h"
#include "headerFiles/general.h"
#include "headerFiles/logger.h"
#include "headerFiles/request.h"
#include "headerFiles/response.h"


typedef struct pathNode {
  char* method;
  char* path;
  int (*funcPtr)(request* reqPtr, response* respPtr);
  struct pathNode* next;
} pathNode_t;

int customPathEnabled;
pathNode_t* customPaths;

int createServer(int port);
int startServer(int serverFd);

void addCustomPath(char* method, char* path, int (*funcPtr)(request* reqPtr, response* respPtr));
int callCustomPath(char* method, char* path, request* reqPtr, response* respPtr);

int sendResponse(int connection, response* respPtr);
int sendNotFound(int connection, request* reqPtr);

int determinContentType(char* path, char** result);

int handleGETrequest(request* req, response* resp);
int handleRequest(int conFd, request* req);
int handleConnection(int conFd);


#endif
