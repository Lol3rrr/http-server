#ifndef KEYVALUELIST_H
#define KEYVALUELIST_H

#include <string.h>

#include "general.h"
#include "logger.h"

typedef struct kvNode {
  char* key;
  char* value;
  struct kvNode* next;
} kvNode_t;

kvNode_t* createKVNode(char* key, char* value, int pKeyLength, int pValueLength);

void pushKVNode(kvNode_t* head, char* key, char* value, int pKeyLength, int pValueLength);
void print_kv_nodes(kvNode_t* head);
int getKV(kvNode_t* head, char* key, kvNode_t** result);

// For starting it pass the head of the list
void cleanKVNodes(kvNode_t* current);

int createKVPair(kvNode_t* node, char** result);

#endif
