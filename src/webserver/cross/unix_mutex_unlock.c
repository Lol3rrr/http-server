#include "../headerFiles/cross.h"
#ifdef UNIX

void c_mutex_unlock(c_mutex* tmp) {
  pthread_mutex_unlock(tmp);
}

#endif