#include "../headerFiles/general.h"

void sharedFree(void* ptr, size_t size) {
  munmap(ptr, size);
}