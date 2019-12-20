#include "../headerFiles/stats.h"

counter_t* findCounterByID(int pID) {
  counter_t* current = counterRegistry;
  while (current != NULL) {
    if (current->id == pID) {
      return current;
    }

    current = current->next;
  }

  return NULL;
}
