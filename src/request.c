#include "request.h"

void print_request_debug(request* req) {
  if (isDebug() == 0) {
    return;
  }

  printf("[Debug][Request] Printing Request: \n");
  printf("[Debug][Request] Method: '%s' \n", req->method);
  printf("[Debug][Request] Path: '%s' \n", req->path);
  printf("[Debug][Request] Protokol: '%s' \n", req->protokol);
  printf("[Debug][Request] Headers: \n");
  print_header_debug(req->headers);
}

// Returns 0 if worked
int parseRequest(node_t* headerLines, request** reqPtr) {
  clock_t startTime = clock();

  request* req = (request*) malloc(1 * sizeof(request));
  req->method = NULL;
  req->path = NULL;
  req->protokol = NULL;
  req->headers = NULL;

  node_t* current = headerLines;

  headerNode_t* head = (headerNode_t*) malloc(1 * sizeof(headerNode_t));
  head->key = NULL;
  head->value = NULL;
  head->next = NULL;
  int first = 1;

  while (current->next != NULL) {
    char* key = NULL;
    char* value = NULL;

    int worked = parseHeader(current->line, &key, &value);
    if (worked == 0) {
      if (first == 1) {
        head->key = key;
        head->value = value;

        first = 0;
      }else {
        pushHeader(head, key, value);
      }
    }else {
      worked = parseFirstLine(current->line, &(req->method), &(req->path), &(req->protokol));

      if (worked != 0 && isDebug()) {
        printf("[Debug][parseRequest] Could not parse Line '%s' \n", current->line);
      }
    }

    current = current->next;
  }

  req->headers = head;

  if (req->method == NULL || req->path == NULL || req->protokol == NULL || req->headers->key == NULL) {
    if (isDebug()) {
      printf("[Debug][parseRequest] Not everything has been set \n");
      printf("[Debug][parseRequest] Method: '%p', Path: '%p', Protokol: '%p', First Header Key: '%p' \n", req->method, req->path, req->protokol, req->headers->key);
    }

    cleanRequest(req);

    return 1;
  }

  if (find(req->path, "..", -1, -1) != -1) {
    if (isDebug()) {
      printf("[Debug][parseRequest] Found a '..' in the path \n");
    }

    return 2;
  }

  *reqPtr = req;

  clock_t endTime = clock();
  if (isMeasuring()) {
    double time_spent = (double) (endTime - startTime) / CLOCKS_PER_SEC;
    printf("[Measuring][parseRequest] Took %f Seconds \n", time_spent);
  }

  return 0;
}
int cleanRequest(request* reqPtr) {
  if (reqPtr->method != NULL) {
    free(reqPtr->method);
  }
  if (reqPtr->path != NULL) {
    free(reqPtr->path);
  }
  if (reqPtr->protokol != NULL) {
    free(reqPtr->protokol);
  }

  cleanHeader(reqPtr->headers);

  free(reqPtr);
}

int readHTTP(int socketFd, char** buffer, int bufferSize) {
  char* readBuffer = (*buffer);

  int received = recv(socketFd, readBuffer, bufferSize, 0);
  if (received < 1) {
    if (received == 0 && isDebug()) {
      printf("[Debug][readHTTP] Connection Closed \n");
    }

    return 1;
  }

  return received;
}
node_t* splitHTTPRequest(char** buffer, int bufferLength) {
  char* message = (*buffer);

  node_t* head = (node_t*) malloc(1 * sizeof(node_t));
  head->next = NULL;
  head->line = NULL;
  int first = 1;

  int start = 0;
  for (int i = 1; i < bufferLength; i++) {
    // Checking for CLRF
    if (message[i - 1] == 13 && message[i] == 10) {
      int end = i - 1;
      int length = end - start;

      char* line = (char*) malloc((length + 1) * sizeof(char));

      for(int j = 0; j < length; j++) {
        line[j] = message[j + start];
      }
      line[length] = '\0';

      if (first) {
        head->line = line;
        first = 0;
      }else {
        pushHeaderLine(head, line);
      }

      start = i + 1;
    }
  }

  return head;
}

int receiveRequest(int conFd, request** reqPtr) {
  int bufferSize = 4096;
  char* readBuffer = (char*) malloc(bufferSize * sizeof(char));

  int readBytes = readHTTP(conFd, &readBuffer, bufferSize);
  if (readBytes < 0) {
    free(readBuffer);

    return 1;
  }

  if (isDebug()) {
    printf("[Debug][receiveRequest] Read %d Bytes \n", readBytes);
  }

  node_t* head = splitHTTPRequest(&readBuffer, readBytes);

  free(readBuffer);

  request* req;
  int worked = parseRequest(head, &req);
  if (worked != 0) {
    if (isDebug()) {
      printf("[Debug][receiveRequest] Error parsing Request \n");
    }

    cleanHeaderLines(head);

    return 1;
  }

  cleanHeaderLines(head);

  *reqPtr = req;

  return 0;
}
