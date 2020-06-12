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
#include "headerFiles/fileManager.h"

#ifdef PROMETHEUS
#include "headerFiles/stats.h"
#endif

#define HTTP_STATUSOK 200

#define BUFFERSIZE 8192

typedef struct pathNode {
  string method;
  string path;
  int (*funcPtr)(request* reqPtr, response* respPtr);
  struct pathNode* next;
} pathNode_t;

typedef struct {
  int fd;
  pthread_mutex_t mutex;
  fileManager_t* fManager;
} server_t;

int customPathEnabled;
pathNode_t* customPaths;

int createServer(int port, server_t** result);
int startServer(server_t* server);

void addCustomPath(char* method, char* path, int (*funcPtr)(request* reqPtr, response* respPtr));
int callCustomPath(string method, string path, request* reqPtr, response* respPtr);

int sendResponse(int connection, response* respPtr);
void sendNotFound(int connection, request* reqPtr);
void sendInternalError(int connection, request* reqPtr);

int determinContentType(string path, string* result, int* typeID);

int handleGETrequest(request* req, response* resp, fileManager_t* fManager);
int handleRequest(int conFd, request* req, response* resp, fileManager_t* fManager);
int handleConnection(int conFd, request* req, response* resp, fileManager_t* fManager);


#endif
