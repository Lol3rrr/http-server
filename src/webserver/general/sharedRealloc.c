#include "../headerFiles/general.h"

void* sharedRealloc(void* ptr, size_t old, size_t new) {
  munmap(ptr, old);

  void* result = sharedMalloc(new);
  if (result == MAP_FAILED) {
    return NULL;
  }

  return result;
}