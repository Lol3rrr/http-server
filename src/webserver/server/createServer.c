#include "../server.h"

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

  int* metricsPort = (int*) malloc(sizeof(int));
  *metricsPort = 9001;
  c_createDetachedThread(createMetricsEndpoint, metricsPort);
#endif

  server_t* tmp = (server_t*) sharedMalloc(sizeof(server_t));

  tmp->fd = fd;
  tmp->threadCount = threadCount;
  tmp->fManager = createFileManager("website", 7, isInternalCacheEnabled());
  if (isInternalCacheEnabled()) {
    populateCache(tmp->fManager);
  }

  *result = tmp;

  return 0;
}
