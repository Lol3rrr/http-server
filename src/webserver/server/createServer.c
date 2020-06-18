#include "../server.h"

static void initLock(pthread_mutex_t* mutex) {
  pthread_mutexattr_t attr;
  pthread_mutexattr_init(&attr);
  pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_SHARED);
  pthread_mutex_init(mutex, &attr);
  return;
}

int createServer(int port, int threadCount, server_t** result) {
  c_socket fd = c_createSocket(port);

  logInfo("Successfully bound to port %u \n", port);


#ifdef PROMETHEUS
  string requestStat = {
    .content = "total_requests",
    .length = 14
  };
  string errorStat = {
    .content = "total_errors",
    .length = 12
  };
  // Create All the needed Metrics
  createCounter(requestStat, &counterRegistry);
  createCounter(errorStat, &counterRegistry);

  int* port = malloc(sizeof(int));
  *port = 9001:
  createHTTPHeaderPart(createMetricsEndpoint, port)
#endif

  server_t* tmp = (server_t*) sharedMalloc(sizeof(server_t));

  tmp->fd = fd;
  tmp->threadCount = threadCount;
  tmp->fManager = createFileManager("website", 7, isInternalCacheEnabled());
  if (isInternalCacheEnabled()) {
    populateCache(tmp->fManager);
  }
  initLock(&(tmp->mutex));

  *result = tmp;

  return 0;
}
