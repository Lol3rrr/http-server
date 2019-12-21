#include "../headerFiles/stats.h"

void* sharedMalloc(size_t size) {
  // Our memory buffer will be readable and writable:
  int protection = PROT_READ | PROT_WRITE;

  // The buffer will be shared (meaning other processes can access it), but
  // anonymous (meaning third-party processes cannot obtain an address for it),
  // so only this process and its children will be able to use it:
  int visibility = MAP_SHARED | MAP_ANONYMOUS;

  // The remaining parameters to `mmap()` are not important for this use case,
  // but the manpage for `mmap` explains their purpose.
  return mmap(NULL, size, protection, visibility, -1, 0);
}


// Retruns the ID of the new Counter or the ID of the already existing one if one is found
int createCounter(char* pName, counter_t** registry) {
  counter_t* found = findCounterByName(pName, registry);
  if (found != NULL) {
    return found->id;
  }

  counter_t* nCounter = (counter_t*) sharedMalloc(1 * sizeof(counter_t));
  nCounter->id = rand();
  nCounter->count = 0;
  nCounter->name = pName;
  nCounter->next = NULL;

  // If this is the first counter set it as the "root" element
  if ((*registry) == NULL) {
    (*registry) = nCounter;

    return nCounter->id;
  }

  // Otherwise go to the Last element and append it to the list
  counter_t* current = (*registry);
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = nCounter;

  return nCounter->id;
}
