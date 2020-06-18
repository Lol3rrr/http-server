#include "../headerFiles/cross.h"
#ifdef UNIX

void c_cond_signal(c_cond* tmp) {
  pthread_cond_signal(tmp);
}

#endif