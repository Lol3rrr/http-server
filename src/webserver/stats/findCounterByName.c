#include "../headerFiles/stats.h"

counter_t* findCounterByName(string pName, counter_t** registry) {
  counter_t* current = *registry;
  while (current != NULL) {
    if (stringCmp(current->name, pName) == 0) {
      return current;
    }

    current = current->next;
  }

  return NULL;
}
