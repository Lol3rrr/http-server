#include "../headerFiles/cross.h"
#ifdef UNIX

void c_cond_init(c_cond* tmp) {
  pthread_cond_init(tmp, NULL);
}

#endif