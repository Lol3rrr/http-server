#include "../headerFiles/stats.h"

// Retruns the ID of the new Counter or the ID of the already existing one if one is found
int createCounter(string pName, counter_t** registry) {
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
