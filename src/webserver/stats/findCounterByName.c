#include "../headerFiles/stats.h"

counter_t* findCounterByName(char* pName, counter_t** registry) {
  counter_t* current = *registry;
  while (current != NULL) {
    if (strcmp(current->name, pName) == 0) {
      return current;
    }

    current = current->next;
  }

  return NULL;
}
