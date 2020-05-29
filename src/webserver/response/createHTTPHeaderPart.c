#include "../headerFiles/response.h"

typedef struct {
  int length;
  int spacerLength;
} HeaderLengthHelper_t;

typedef struct {
  char* buffer;
  char* spacer;
  int spacerLength;
} HeaderPartHelper_t;

static void addHeaderNode(BTreeNode_t* node, void** data) {
  HeaderLengthHelper_t* tmpData = (HeaderLengthHelper_t*) *data;

  tmpData->length += getHeaderPairLength(node);
  tmpData->length += tmpData->spacerLength;
}

static int getHeaderPartLength(BTreeNode_t* node, int spacerLength) {
  HeaderLengthHelper_t helperData = {
    .length = 0,
    .spacerLength = spacerLength
  };

  HeaderLengthHelper_t* tmpPointer = &helperData;
  void** dataPointer = (void**) &tmpPointer;
  forEach(node, dataPointer, &addHeaderNode);

  return helperData.length;
}

static void addHeaderToBuffer(BTreeNode_t* node, void** data) {
  HeaderPartHelper_t* helper = (HeaderPartHelper_t*) *data;

  int pairLength = createHeaderPair(node, helper->buffer);
  helper->buffer += pairLength;

  memcpy(helper->buffer, helper->spacer, helper->spacerLength);
  helper->buffer += helper->spacerLength;
}

int createHTTPHeaderPart(response* respPtr, char* spacer, int spacerLength, char** result) {
  int headerLength = -1;
  char* headerPart;

  if (respPtr->bTreeHeaders != NULL) {
    headerLength = getHeaderPartLength(respPtr->bTreeHeaders, spacerLength);
    headerPart = createEmptyCString(headerLength);

    HeaderPartHelper_t helperData = {
      .buffer = headerPart,
      .spacer = spacer,
      .spacerLength = spacerLength
    };

    HeaderPartHelper_t* helperPtr = &helperData;
    void** dataPointer = (void**) &helperPtr;
    forEach(respPtr->bTreeHeaders, dataPointer, &addHeaderToBuffer);
  }

  *result = headerPart;

  return headerLength;
}
