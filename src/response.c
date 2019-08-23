#include "response.h"

int addHeader(response* respPtr, char* key, char* value) {
  int keyLength = getLength(key);
  int valueLength = getLength(value);

  char* keyValue = (char*) malloc((keyLength + 1) * sizeof(char));
  char* valueValue = (char*) malloc((valueLength + 1) * sizeof(char));
  keyValue[keyLength] = '\0';
  valueValue[valueLength] = '\0';

  strncpy(keyValue, key, keyLength);
  strncpy(valueValue, value, valueLength);

  if (respPtr->headers == NULL) {
    respPtr->headers = (headerNode_t*) malloc(1 * sizeof(headerNode_t));
    respPtr->headers->key = keyValue;
    respPtr->headers->value = valueValue;
    respPtr->headers->next = NULL;

    return 0;
  }

  headerNode_t* head = respPtr->headers;

  pushHeader(head, keyValue, valueValue);

  return 0;
}

int setContent(response* respPtr, char* contentType, int contentLength) {
  addHeader(respPtr, "Content-Type", contentType);
  char* str = (char*) malloc(12 * sizeof(char));
  sprintf(str, "%d", contentLength);
  addHeader(respPtr, "Content-Length", str);

  free(str);

  return 0;
}
int setData(response* respPtr, char* data, int size) {
  respPtr->data = data;
  respPtr->dataSize = size;

  return 0;
}

int allowCaching(request* reqPtr) {
  if (isCaching() == 0) {
    return 0;
  }

  headerNode_t* result;
  int worked = getHeader(reqPtr->headers, "Cache-Control", &result);
  if (worked == 0) {
    char* value = result->value;
    if (strcmp(value, "max-age=0") == 0) {
      return 0;
    }

    if (strcmp(value, "no-cache") == 0) {
      return 0;
    }

    if (strcmp(value, "no-store") == 0) {
      return 0;
    }
  }

  return 1;
}
int setCache(response* respPtr, request* reqPtr, int cacheTime) {
  if (allowCaching(reqPtr) != 1) {
    return 0;
  }

  int defaultCacheTime = 24 * 60 * 60;
  int cacheValue = defaultCacheTime;

  if (cacheTime > 0) {
    cacheValue = cacheTime;
  }

  char cacheValueStr[12];
  sprintf(cacheValueStr, "%d", cacheValue);
  int cacheValueLength = getLength(cacheValueStr);
  int preCacheLength = 16;

  int cacheHeaderLength = cacheValueLength + preCacheLength;
  char* cacheHeader = (char*) malloc((cacheHeaderLength + 1) * sizeof(char));
  cacheHeader[cacheHeaderLength] = '\0';


  strncpy(cacheHeader, "public, max-age=", 16);
  strncpy(cacheHeader + 16, cacheValueStr, cacheValueLength);

  addHeader(respPtr, "Cache-Control", cacheHeader);
}

void print_response_debug(response* respPtr) {
  if (debug == 0) {
    return;
  }

  printf("[Debug][Response] Printing Response: \n");
  printf("[Debug][Response] Statuscode: %d \n", respPtr->statusCode);
  printf("[Debug][Response] Statusmessage: %s \n", respPtr->statusMessage);
  printf("[Debug][Response] Protokol: %s \n", respPtr->protokol);
  printf("[Debug][Response] Headers: \n");
  print_header_debug(respPtr->headers);
}

response* createResponse(int statusCode, char* statusMessage, char* protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->headers = NULL;

  int protokolLength = getLength(protokol);
  resp->protokol = (char*) malloc((protokolLength + 1) * sizeof(char));
  resp->protokol[protokolLength] = '\0';
  strncpy(resp->protokol, protokol, protokolLength);

  resp->statusCode = statusCode;
  resp->statusMessage = statusMessage;

  addHeader(resp, "Server", "Lol3r-C/0.1");

  return resp;
}
int cleanResponse(response* respPtr) {
  free(respPtr->protokol);
  free(respPtr->data);

  cleanHeader(respPtr->headers);

  free(respPtr);

  return 0;
}

int createFirstLine(response* respPtr, char** result) {
  int protokolLength = getLength(respPtr->protokol);

  char statusCode[12];
  sprintf(statusCode, "%d", respPtr->statusCode);
  int statusCodeLength = getLength(statusCode);
  int statusMessageLength = getLength(respPtr->statusMessage);

  int totalLength = protokolLength + 1 + statusCodeLength + 1 + statusMessageLength + 2;

  char* firstLine = (char*) malloc((totalLength + 1) * sizeof(char));
  firstLine[totalLength] = '\0';

  int lineOffset = 0;

  for(int i = 0; i < protokolLength; i++) {
    firstLine[lineOffset] = respPtr->protokol[i];
    lineOffset++;
  }
  firstLine[lineOffset] = ' ';
  lineOffset++;

  for(int i = 0; i < statusCodeLength; i++) {
    firstLine[lineOffset] = statusCode[i];
    lineOffset++;
  }
  firstLine[lineOffset] = ' ';
  lineOffset++;

  for(int i = 0; i < statusMessageLength; i++) {
    firstLine[lineOffset] = respPtr->statusMessage[i];
    lineOffset++;
  }
  firstLine[lineOffset] = '\r';
  lineOffset++;
  firstLine[lineOffset] = '\n';

  *result = firstLine;

  return totalLength;
}

int createHTTPHeaderPart(response* respPtr, char* spacer, char** result) {
  int spacerLength = getLength(spacer);

  int headerLength = -1;
  char* headerPart;

  if (respPtr->headers != NULL) {
    headerNode_t* currentLength = respPtr->headers;

    headerLength = 0;

    while (currentLength != NULL) {
      char* result;

      headerLength += createHeaderPair(currentLength, &result);
      headerLength += spacerLength;

      free(result);

      currentLength = currentLength->next;
    }

    headerPart = (char*) malloc((headerLength + 1) * sizeof(char));
    headerPart[headerLength] = '\0';

    int offset = 0;

    headerNode_t* current = respPtr->headers;
    while (current != NULL) {
      char* pair;
      int pairLength = createHeaderPair(current, &pair);
      for (int i = 0; i < pairLength; i++) {
        headerPart[offset] = pair[i];

        offset++;
      }

      free(pair);

      for (int i = 0; i < spacerLength; i++) {
        headerPart[offset] = spacer[i];
        offset++;
      }

      current = current->next;
    }

    *result = headerPart;
  }

  return headerLength;
}

int createHTTPHead(response* respPtr, char** result) {
  char spacer[2] = {'\r', '\n'};
  int spacerLength = 2;

  char* firstLine;
  int firstLineLength = createFirstLine(respPtr, &firstLine);

  char* headerPart;
  int headerLength = createHTTPHeaderPart(respPtr, spacer, &headerPart);

  int totalLength = firstLineLength + headerLength + spacerLength;
  char* head = (char*) malloc((totalLength + 1) * sizeof(char));
  head[totalLength] = '\0';

  int headOffset = 0;
  for(int i = 0; i < firstLineLength; i++) {
    head[headOffset] = firstLine[i];
    headOffset++;
  }
  for(int i = 0; i < headerLength; i++) {
    head[headOffset] = headerPart[i];
    headOffset++;
  }
  for(int i = 0; i < spacerLength; i++) {
    head[headOffset] = spacer[i];
    headOffset++;
  }

  free(firstLine);
  free(headerPart);

  *result = head;

  return totalLength;
}
int createHTTPResponse(response* respPtr, char** result) {
  char* head;
  int headSize = createHTTPHead(respPtr, &head);

  int contentLength = respPtr->dataSize;

  int totalLength = headSize + contentLength;

  char* resp = (char*) malloc((totalLength + 1) * sizeof(char));
  resp[totalLength] = '\0';

  int respOffset = 0;
  for(int i = 0; i < headSize; i++) {
    resp[respOffset] = head[i];
    respOffset++;
  }
  for(int i = 0; i < contentLength; i++) {
    resp[respOffset] = respPtr->data[i];
    respOffset++;
  }

  free(head);

  *result = resp;

  return totalLength;
}
