#include "header.h"

void pushHeader(headerNode_t* head, char* key, char* value) {
  headerNode_t* current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  /* now we can add a new variable */
  current->next = (headerNode_t*) malloc(1 * sizeof(headerNode_t));
  current->next->key = key;
  current->next->value = value;
  current->next->next = NULL;
}

void print_header_debug(headerNode_t* head) {
  if (isDebug() == 0) {
    return;
  }

  headerNode_t* current = head;

  while (current != NULL) {
    printf("[Debug][Header] Key: '%s' Value: '%s'\n", current->key, current->value);
    current = current->next;
  }
}

void cleanHeader(headerNode_t* node) {
  if (node->next != NULL) {
    cleanHeader(node->next);
  }

  free(node->key);
  free(node->value);
  free(node);
}

// Returns 0 if worked
int parseHeader(char* headerLine, char** keyPtr, char** valuePtr) {
  int totalLength = getLength(headerLine);
  int seperator = find(headerLine, ":", totalLength, 1);

  if (seperator == -1) {
    return 1;
  }

  int keyLength = seperator;
  int valueLength = totalLength - seperator;

  char* key = (char*) malloc((keyLength + 1) * sizeof(char));
  char* value = (char*) malloc((valueLength + 1) * sizeof(char));

  for (int i = 0; i < keyLength; i++) {
    key[i] = headerLine[i];
  }
  key[keyLength] = '\0';

  int index = 0;
  for (int i = 0; i < valueLength; i++) {
    if (i == 0 && headerLine[seperator + 1 + i] == ' ') {
      continue;
    }

    value[index] = headerLine[seperator + 1 + i];
    index++;
  }
  value[index] = '\0';

  *keyPtr = key;
  *valuePtr = value;

  return 0;
}

int createHeaderPair(headerNode_t* headerPtr, char** result) {
  int keyLength = getLength(headerPtr->key);
  int valueLength = getLength(headerPtr->value);

  int totalLength = keyLength + 2 + valueLength;

  (*result) = (char*) malloc((totalLength + 1) * sizeof(char));
  for(int i = 0; i < keyLength; i++) {
    (*result)[i] = headerPtr->key[i];
  }
  (*result)[keyLength + 0] = ':';
  (*result)[keyLength + 1] = ' ';
  for(int i = 0; i < valueLength; i++) {
    (*result)[i + 2 + keyLength] = headerPtr->value[i];
  }
  (*result)[totalLength] = '\0';

  return totalLength;
}

// Returns 0 if worked
int parseFirstLine(char* firstLine, char** methodPtr, char** pathPtr, char** protokolPtr) {
  int totalLength = -1;
  int start = 0;
  int partNumber = 0;
  for (int i = 0; 1; i++) {
    if (firstLine[i] == ' ' || firstLine[i] == '\0') {
      int end = i;
      int length = end - start;

      char* part = (char*) malloc((length + 1) * sizeof(char));

      for(int j = 0; j < length; j++) {
        part[j] = firstLine[start + j];
      }
      part[length] = '\0';

      if (partNumber == 0) {
        *methodPtr = part;
      }
      if (partNumber == 1) {
        *pathPtr = part;
      }
      if (partNumber == 2) {
        *protokolPtr = part;

        break;
      }

      start = i + 1;
      partNumber++;
    }
  }

  return 0;
}
