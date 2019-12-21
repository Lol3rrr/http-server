#ifndef STATS_H
#define STATS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/mman.h>

// Socket stuff
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "logger.h"

typedef struct counter {
  int id;
  int count;
  char* name;
  struct counter* next;
} counter_t;

extern counter_t* counterRegistry;

counter_t* findCounterByID(int counterID);
counter_t* findCounterByName(char* name, counter_t** registry);

int createCounter(char* name, counter_t** registry);
int incCounterByID(int counterID);
int incCounterByName(char* name, counter_t** registry);


void createMetricsEndpoint(int port);

#endif
