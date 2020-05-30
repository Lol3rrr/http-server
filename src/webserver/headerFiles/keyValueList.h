#ifndef KEYVALUELIST_H
#define KEYVALUELIST_H

#include <string.h>

#include "general.h"
#include "logger.h"

typedef struct kvNode {
  char* key;
  int keyLength;
  int keyFree;
  char* value;
  int valueLength;
  int valueFree;
  struct kvNode* next;
} kvNode_t;

kvNode_t* createKVNode(string* key, string* value);

kvNode_t* pushKVNode(kvNode_t* head, string* key, string* value);
void print_kv_nodes(kvNode_t* head);
int getKV(kvNode_t* head, string* key, kvNode_t** result);

// For starting it pass the head of the list
void cleanKVNodes(kvNode_t* current);

int getKVPairLength(kvNode_t* node);

#endif
