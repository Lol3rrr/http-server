#ifndef STATS_H
#define STATS_H

#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include <signal.h>

#include "logger.h"
#include "general.h"

typedef struct counter {
  int id;
  int count;
  string name;
  struct counter* next;
} counter_t;

extern counter_t* counterRegistry;

counter_t* findCounterByID(int counterID, counter_t** registry);
counter_t* findCounterByName(string name, counter_t** registry);

int createCounter(string name, counter_t** registry);
int incCounterByID(int counterID, counter_t** registry);
int incCounterByName(string name, counter_t** registry);

int counterRegistryToString(counter_t** registry, char** result);
int counterToTypeStringLength(counter_t* counter);
int counterToTypeString(counter_t* counter, char** result);
int counterToStringLength(counter_t* counter);
int counterToString(counter_t* counter, char** result);

void createMetricsEndpoint(int port);

#endif
