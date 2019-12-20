#ifndef STATS_H
#define STATS_H

#include <stdlib.h>
#include <string.h>

typedef struct counter {
  int id;
  int count;
  char* name;
  struct counter* next;
} counter_t;

extern counter_t* counterRegistry;

counter_t* findCounterByID(int counterID);
counter_t* findCounterByName(char* name);

int createCounter(char* name);
void addCounter(int counterID);

#endif
