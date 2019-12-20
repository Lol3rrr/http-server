#include "../headerFiles/stats.h"

// Retruns the ID of the new Counter or the ID of the already existing one if one is found
int createCounter(char* pName) {
  counter_t* found = findCounterByName(pName);
  if (found != NULL) {
    return found->id;
  }

  counter_t* nCounter = (counter_t*) malloc(1 * sizeof(counter_t));
  nCounter->id = rand();
  nCounter->count = 0;
  nCounter->name = pName;
  nCounter->next = NULL;

  // If this is the first counter set it as the "root" element
  if (counterRegistry == NULL) {
    counterRegistry = nCounter;

    return nCounter->id;
  }

  // Otherwise go to the Last element and append it to the list
  counter_t* current = counterRegistry;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = nCounter;

  return nCounter->id;
}
