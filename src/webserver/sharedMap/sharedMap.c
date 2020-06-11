#include "../headerFiles/sharedMap.h"

unsigned calcHash(char* str) {
  unsigned hash = 5381;
  while (*str) {
    hash = ((hash << 5) + hash) ^ *(str++);
  }
  return hash;
}

int bucketIndex(int bucketCount, unsigned hash) {
  return hash & (bucketCount - 1);
}

static bucketEntry_t* newNode(char* key, int keyLength, unsigned hash, void* data, int dataSize) {
  bucketEntry_t* result = sharedMalloc(sizeof(bucketEntry_t));

  result->key = sharedMalloc(keyLength * sizeof(char));
  memcpy(result->key, key, keyLength);
  result->keyLength = keyLength;
  result->hash = hash;
  result->data = sharedMalloc(dataSize);
  memcpy(result->data, data, dataSize);
  result->next = NULL;

  return result;
}


sharedMap_t* initShared(int buckets) {
  sharedMap_t* result = sharedMalloc(sizeof(sharedMap_t));

  result->bucketCount = buckets;
  result->buckets = sharedMalloc(buckets * sizeof(bucketEntry_t*));

  for (int i = 0; i < buckets; i++) {
    result->buckets[i] = NULL;
  }

  return result;
}

void setMap(sharedMap_t* map, char* key, int keyLength, void* data, int dataSize) {
  unsigned hash = calcHash(key);
  int index = bucketIndex(map->bucketCount, hash);

  bucketEntry_t* entry = map->buckets[index];
  if (entry == NULL) {
    map->buckets[index] = newNode(key, keyLength, hash, data, dataSize);
    return;
  }

  while (entry->next) {
    entry = entry->next;
  }
  entry->next = newNode(key, keyLength, hash, data, dataSize);
}

void* getMap(sharedMap_t* map, char* key, int keyLength) {
  unsigned hash = calcHash(key);
  int index = bucketIndex(map->bucketCount, hash);

  bucketEntry_t* entry = map->buckets[index];
  while (entry) {
    if (
      entry->hash == hash && 
      entry->keyLength == keyLength && 
      memcmp(entry->key, key, keyLength) == 0) {
        return entry->data;
    }

    entry = entry->next;
  }

  return NULL;
}
