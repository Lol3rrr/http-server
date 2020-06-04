#ifndef KEYVALUELIST_H
#define KEYVALUELIST_H

#include <string.h>

#include "general.h"
#include "logger.h"

typedef struct kvNode {
  string key;
  string value;
  struct kvNode* next;
} kvNode_t;

typedef struct kvList {
  int bufferSize;
  int currentIndex;
  kvNode_t* buffer;
  kvNode_t additional;
  kvNode_t* last;
} kvList_t;

kvList_t createKVList(int bufferSize);
kvNode_t* pushKVList(kvList_t list, string key, string value);
void cleanKVList(kvList_t list);
int findKV(kvList_t list, string key, kvNode_t** result);
void print_kv_list(kvList_t list);

kvNode_t* createKVNode(string* key, string* value);

kvNode_t* pushKVNode(kvNode_t* head, string* key, string* value);
void print_kv_nodes(kvNode_t* head);
int getKV(kvNode_t* head, string key, kvNode_t** result);

// For starting it pass the head of the list
void cleanKVNodes(kvNode_t* current);

int getKVPairLength(kvNode_t* node);

#endif
