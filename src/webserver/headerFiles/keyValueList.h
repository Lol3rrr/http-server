#ifndef KEYVALUELIST_H
#define KEYVALUELIST_H

#include <string.h>

#include "general.h"

typedef struct kvNode {
  char* key;
  char* value;
  struct kvNode* next;
} kvNode_t;

void pushKVNode(kvNode_t* head, char* key, char* value, int pKeyLength, int pValueLength);

int getKV(kvNode_t* head, char* key, kvNode_t** result);

// For starting it pass the head of the list
void cleanKVNodes(kvNode_t* current);

#endif
