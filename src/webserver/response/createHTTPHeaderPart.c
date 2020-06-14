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

static void addHeaderNode(kvNode_t* node, void** data) {
  HeaderLengthHelper_t* tmpData = (HeaderLengthHelper_t*) *data;

  tmpData->length += getHeaderPairLength(node);
  tmpData->length += tmpData->spacerLength;
}

static int getHeaderPartLength(kvList_t list, int spacerLength) {
  HeaderLengthHelper_t helperData = {
    .length = 0,
    .spacerLength = spacerLength
  };

  HeaderLengthHelper_t* tmpPointer = &helperData;
  void** dataPointer = (void**) &tmpPointer;
  forEach(list, dataPointer, &addHeaderNode);

  return helperData.length;
}

static void addHeaderToBuffer(kvNode_t* node, void** data) {
  HeaderPartHelper_t* helper = (HeaderPartHelper_t*) *data;

  int pairLength = createHeaderPair(node, helper->buffer);
  helper->buffer += pairLength;

  memcpy(helper->buffer, helper->spacer, helper->spacerLength);
  helper->buffer += helper->spacerLength;
}

int getHTTPHeaderPartLength(response* respPtr, int spacerLength) {
  return getHeaderPartLength(respPtr->headerList, spacerLength);
}

int createHTTPHeaderPart(response* respPtr, char* spacer, int spacerLength, char* headerPart) {
  int headerLength = 0;
  headerLength = getHeaderPartLength(respPtr->headerList, spacerLength);

  HeaderPartHelper_t helperData = {
    .buffer = headerPart,
    .spacer = spacer,
    .spacerLength = spacerLength
  };

  HeaderPartHelper_t* helperPtr = &helperData;
  void** dataPointer = (void**) &helperPtr;
  forEach(respPtr->headerList, dataPointer, &addHeaderToBuffer);

  return headerLength;
}
