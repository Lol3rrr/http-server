#include "../headerFiles/stats.h"

counter_t* findCounterByID(int pID, counter_t** registry) {
  counter_t* current = *registry;
  while (current != NULL) {
    if (current->id == pID) {
      return current;
    }

    current = current->next;
  }

  return NULL;
}
