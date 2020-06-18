#include "../headerFiles/cross.h"
#ifdef UNIX

void c_mutex_lock(c_mutex* tmp) {
  pthread_mutex_lock(tmp);
}

#endif