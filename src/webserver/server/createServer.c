#include "../server.h"

static sharedLock* initSharedLock() {
  int prot = PROT_READ | PROT_WRITE;
  int flags = MAP_SHARED | MAP_ANONYMOUS;
  sharedLock* lock = mmap(NULL, sizeof(sharedLock), prot, flags, -1, 0);

  pthread_mutexattr_t attr;
  pthread_mutexattr_init(&attr);
  pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_SHARED);
  pthread_mutex_init(&lock->mutex, &attr);

  return lock;
}

int createServer(int port, server_t** result) {
  struct sockaddr_in addr;
  int fd;

  fd = socket(AF_INET, SOCK_STREAM, 0);
  if(fd == -1) {
      logError("Could not open socket \n");
      return -1;
  }

  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = 0;
  addr.sin_addr.s_addr = INADDR_ANY;
  addr.sin_family = AF_INET;

  if(bind(fd, (struct sockaddr *)&addr,sizeof(struct sockaddr_in) ) == -1) {
      logError("Could not bind socket \n");
      return -1;
  }

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

  if (fork() == 0) {
    createMetricsEndpoint(9001);
  }
#endif

  server_t* tmp = sharedMalloc(sizeof(server_t));

  tmp->fd = fd;
  tmp->lock = initSharedLock();
  tmp->fManager = createFileManager("website", 7, isInternalCacheEnabled());
  if (isInternalCacheEnabled()) {
    populateCache(tmp->fManager);
  }

  *result = tmp;

  return 0;
}
