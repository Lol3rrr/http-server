#ifndef RESPONSE_H
#define RESPONSE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "file.h"
#include "general.h"
#include "header.h"
#include "logger.h"
#include "request.h"
#include "keyValueList.h"

typedef struct response {
  int statusCode;
  string statusMessage;
  string protokol;
  kvList_t headerList;
  char* data;
  int dataSize;

  int streaming;
  int streamSize;
  File file;
} response;


int addHeader(response* respPtr, string key, string value);

int isCachingAllowed(request* reqPtr);

int setContentType(response* respPtr, char* contentType, int contentLength);
int setData(response* respPtr, char* data, int size);
int setStreaming(response* respPtr, File f);
int setCache(response* respPtr, request* reqPtr, int cacheTime);
int setStatus(response* respPtr, int statusCode, char* statusMessage);

void print_response_debug(response* respPtr);

response createEmptyResponse();
response createResponse(int statusCode, char* statusMessage, char* protokol);
void setResponse(response* tmpResp, string protokol);
int cleanResponse(response* respPtr);

int getFirstLineLength(response* respPtr);
int createFirstLine(response* respPtr, char* result);

int getHTTPHeaderPartLength(response* respPtr, int spacerLength);
int createHTTPHeaderPart(response* respPtr, char* spacer, int spacerLength, char* result);

int createHTTPHead(response* respPtr, char** result);
int createHTTPResponse(response* respPtr, string* headResult, string* bodyResult);

#endif
