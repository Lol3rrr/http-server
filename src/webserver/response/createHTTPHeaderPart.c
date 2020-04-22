#include "../headerFiles/response.h"

static int getHeaderPartLength(kvNode_t* node, int spacerLength) {
  int length = getKVPairLength(node);
  length += spacerLength;

  if (node->next) {
    length += getHeaderPartLength(node->next, spacerLength);
  }

  return length;
}

int createHTTPHeaderPart(response* respPtr, char* spacer, int spacerLength, char** result) {
  int headerLength = -1;
  char* headerPart;

  if (respPtr->headers.kvNodes != NULL) {
    headers_t* headers = &(respPtr->headers);
    kvNode_t* currentKV = headers->kvNodes;
    headerPartNode_t* head = NULL;

    headerLength = getHeaderPartLength(headers->kvNodes, spacerLength);
    headerPart = createEmptyCString(headerLength);

    char* buffer = headerPart;

    while (currentKV != NULL) {
      string result;
      createKVPair(currentKV, &result);

      memcpy(buffer, result.content, result.length);
      buffer += result.length;

      memcpy(buffer, spacer, spacerLength);
      buffer += spacerLength;

      free(result.content);

      currentKV = currentKV->next;
    }

    *result = headerPart;
  }

  return headerLength;
}
