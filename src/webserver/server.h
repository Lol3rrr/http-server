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
#define DEFAULT_THREAD_COUNT 100

typedef struct tpool_work {
  int connection;
  struct tpool_work* next;
} tpool_work_t;

typedef struct tpool {
  tpool_work_t* work_first;
  tpool_work_t* work_last;
  pthread_mutex_t work_mutex;
  pthread_cond_t work_cond;
  size_t thread_cnt;
  fileManager_t* fManager;
} tpool_t;


tpool_t* createThreadPool(size_t num, fileManager_t* fManager);
int tpool_addWork(tpool_t* tp, int con);


typedef struct pathNode {
  string method;
  string path;
  int (*funcPtr)(request* reqPtr, response* respPtr);
  struct pathNode* next;
} pathNode_t;

typedef struct {
  int fd;
  int threadCount;
  pthread_mutex_t mutex;
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
