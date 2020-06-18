#include "../headerFiles/cross.h"
#ifdef UNIX

int c_createDetachedThread(void* (*f) (void* arg), void* arg) {
  pthread_t thread;
  pthread_create(&thread, NULL, f, arg);
  pthread_detach(thread);

  return thread;
}

#endif