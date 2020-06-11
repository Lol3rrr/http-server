#ifndef SHARED_MAP_H
#define SHARED_MAP_H

#include <sys/mman.h>
#include <string.h>

#include "general.h"

typedef struct bucketEntry {
  char* key;
  int keyLength;
  unsigned hash;
  void* data;
  struct bucketEntry* next;
} bucketEntry_t;

typedef struct sharedMap {
  int bucketCount;
  bucketEntry_t** buckets;
} sharedMap_t;

sharedMap_t* initShared(int buckets);
void setMap(sharedMap_t* map, char* key, int keyLength, void* data, int dataSize);
void* getMap(sharedMap_t* map, char* key, int keyLength);

unsigned calcHash(char* str);
int bucketIndex(int bucketCount, unsigned hash);

#endif