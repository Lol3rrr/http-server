#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <signal.h>

#include <sys/mman.h>

#include "headerFiles/general.h"
#include "headerFiles/logger.h"
#include "headerFiles/request.h"
#include "headerFiles/response.h"
#include "headerFiles/fileManager.h"
#include "headerFiles/cross.h"

#ifdef PROMETHEUS
#include "headerFiles/stats.h"
#endif

#define HTTP_STATUSOK 200

#define BUFFERSIZE 8192
#define DEFAULT_THREAD_COUNT 100

typedef struct tpool_work {
  c_socket connection;
  struct tpool_work* next;
} tpool_work_t;

typedef struct tpool {
  tpool_work_t* work_first;
  tpool_work_t* work_last;
  c_mutex work_mutex;
  c_cond work_cond;
  size_t thread_cnt;
  fileManager_t* fManager;
} tpool_t;


tpool_t* createThreadPool(size_t num, fileManager_t* fManager);
void startThreadPool(tpool_t* tp);
tpool_work_t* tpool_createWork();
int tpool_addWork(tpool_t* tp, tpool_work_t* work, c_socket con);

typedef struct pathNode {
  string method;
  string path;
  int (*funcPtr)(request* reqPtr, response* respPtr);
  struct pathNode* next;
} pathNode_t;

typedef struct {
  c_socket fd;
  int threadCount;
  fileManager_t* fManager;
} server_t;

extern int customPathEnabled;
extern pathNode_t* customPaths;

int createServer(int port, int threadCount, server_t** result);
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
