#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <signal.h>

// Socket stuff
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <pthread.h>
#include <sys/mman.h>

#include "headerFiles/general.h"
#include "headerFiles/logger.h"
#include "headerFiles/request.h"
#include "headerFiles/response.h"

#ifdef PROMETHEUS
#include "headerFiles/stats.h"
#endif


#define HTMLTYPE 0
#define CSSTYPE 1
#define JSTYPE 2
#define TEXTTYPE 3
#define IMAGETYPE 4

#define HTTP_STATUSOK 200

typedef struct pathNode {
  string method;
  string path;
  int (*funcPtr)(request* reqPtr, response* respPtr);
  struct pathNode* next;
} pathNode_t;


int customPathEnabled;
pathNode_t* customPaths;

int createServer(int port);
int startServer(int serverFd);

void addCustomPath(char* method, char* path, int (*funcPtr)(request* reqPtr, response* respPtr));
int callCustomPath(string method, string path, request* reqPtr, response* respPtr);

int sendResponse(int connection, response* respPtr);
void sendNotFound(int connection, request* reqPtr);
void sendInternalError(int connection, request* reqPtr);

int determinContentType(string path, char** result, int* typeID);

int handleGETrequest(request* req, response* resp);
int handleRequest(int conFd, request* req);
int handleConnection(int conFd, request* req);


#endif
