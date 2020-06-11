#include "../server.h"

typedef struct {
  pthread_mutex_t mutex;
} sharedLock;

static sharedLock* lock = NULL;

void initSharedLock() {
  int prot = PROT_READ | PROT_WRITE;
  int flags = MAP_SHARED | MAP_ANONYMOUS;
  lock = mmap(NULL, sizeof(sharedLock), prot, flags, -1, 0);

  pthread_mutexattr_t attr;
  pthread_mutexattr_init(&attr);
  pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_SHARED);
  pthread_mutex_init(&lock->mutex, &attr);
}

int startServer(int serverFd) {
  if (listen(serverFd, SOMAXCONN)) {
    logError("Failed to listen for connections \n");
  }

  signal(SIGCHLD,SIG_IGN);

  initSharedLock();
  fileManager_t* fManager = createFileManager("website", 7, isInternalCacheEnabled());
  if (isInternalCacheEnabled()) {
    populateCache(fManager);
  }

  logInfo("Now waiting for connections \n");
  while (1) {
    pthread_mutex_lock(&lock->mutex);

    if (fork() == 0) {
      request tmpReq = createEmptyRequest();
      response tmpResp = createEmptyResponse();

      int session_fd = accept(serverFd, 0, 0);
      pthread_mutex_unlock(&lock->mutex);

      handleConnection(session_fd, &tmpReq, &tmpResp, fManager);

      cleanRequest(&tmpReq);
      cleanResponse(&tmpResp);

      int worked = close(session_fd);
      if (worked < 0) {
        logError("Closing connection \n");
      }

      exit(0);
    }
  }

  return 0;
}
