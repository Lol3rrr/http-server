#ifndef BINARY_HEADER_TREE_H
#define BINARY_HEADER_TREE_H

#include "logger.h"
#include "general.h"

typedef struct BTreeNode {
  int keyHash;
  string key;
  string value;
  struct BTreeNode* right;
  struct BTreeNode* left;
} BTreeNode_t;


// Used to calculate a simple and fast "hash" for faster komparisons
int calculateKeyHash(string key);

// Returns
// 0: Keys match
// < 0: The given Key is smaller than the Nodes key
// > 0: The given Key is greater than the Nodes key
int cmp(string keyStr, int keyHash, BTreeNode_t* node);

// Inserts a new Header into the Tree
// Replaces the Value if the key already exists
void insert(BTreeNode_t** root, string key, string value);

// Searches the Tree for a Node with the new Key
// Returns
// Valid Pointer: The Node with a matching key 
// NULL: Could not find a matching node
BTreeNode_t* search(BTreeNode_t* root, string key);

// Deletes the entire Node, content + node-Ptr itself
void deleteNode(BTreeNode_t* node);

// Removes the Node with a matching key
void removeNode(BTreeNode_t** root, string key);

// Deletes all the Nodes in the Tree and all the content of the 
// Nodes to make sure no memory leak can occur
void cleanUpTree(BTreeNode_t* root);

// Simply prints the entire Tree as Debug output
void printTree(BTreeNode_t* root);

// Executes the given Callback function for each node of the Tree
// the "void** extraData" can be used to have some sort of data that
// will be passed to each function as a double pointer to allow for 
// modification from the Function itself, can be used to store some
// data
void forEach(BTreeNode_t* root, void** extraData, void (*callBack)(BTreeNode_t* node, void** data));

// Returns the Size of the Header Pair
int getHeaderPairLength(BTreeNode_t* node);
// Actually creates the Header Pair and stores it in the given result string
int createHeaderPair(BTreeNode_t* node, char* destination);

#endif