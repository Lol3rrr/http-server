#include "../headerFiles/cross.h"
#ifdef UNIX

void c_mutex_init(c_mutex* tmp) {
  pthread_mutex_init(tmp, NULL);
}

#endif