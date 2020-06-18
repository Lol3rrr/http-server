#include "../headerFiles/cross.h"
#ifdef UNIX

void c_cond_wait(c_cond* tmp, c_mutex* tmpMutex) {
  pthread_cond_wait(tmp, tmpMutex);
}

#endif