#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

// Socket stuff
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>

int debug;

typedef struct node {
  char* line;
  struct node* next;
} node_t;

void pushHeaderLine(node_t* head, char* line) {
    node_t* current = head;
    while (current->next != NULL) {
      current = current->next;
    }

    /* now we can add a new variable */
    current->next = (node_t*) malloc(1 * sizeof(node_t));
    current->next->line = line;
    current->next->next = NULL;
}

void print_headerLine_debug(node_t* head) {
  if (debug == 0) {
    return;
  }

  node_t* current = head;

  while (current != NULL) {
    printf("[Debug] Line: '%s' Next: '%p'\n", current->line, current->next);
    current = current->next;
  }
}

void cleanHeaderLines(node_t* node) {
  if (node->next != NULL) {
    cleanHeaderLines(node->next);
  }

  free(node->line);
  free(node);
}

typedef struct headerNode {
  char* key;
  char* value;
  struct headerNode* next;
} headerNode_t;

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
  if (debug == 0) {
    return;
  }

  headerNode_t* current = head;

  while (current != NULL) {
    printf("[Debug] Key: '%s' Value: '%s' Next: '%p'\n", current->key, current->value, current->next);
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
  int seperator = -1;
  int totalLength = -1;
  for (int i = 0; 1; i++) {
    if (headerLine[i] == '\0') {
      totalLength = i;
      break;
    }

    if (seperator != -1) {
      continue;
    }

    if (headerLine[i] == ':') {
      seperator = i;
    }
  }

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
  int keyLength = 0;
  int valueLength = 0;

  for(int i = 0; 1; i++) {
    if (headerPtr->key[i] == '\0') {
      keyLength = i;
      break;
    }
  }
  for(int i = 0; 1; i++) {
    if (headerPtr->value[i] == '\0') {
      valueLength = i;
      break;
    }
  }

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

typedef struct request {
  char* method;
  char* path;
  char* protokol;
  headerNode_t* headers;
} request;

void print_request_debug(request* req) {
  if (debug == 0) {
    return;
  }

  printf("[Debug] Printing Request: \n");
  printf("[Debug] Method: '%s' \n", req->method);
  printf("[Debug] Path: '%s' \n", req->path);
  printf("[Debug] Protokol: '%s' \n", req->protokol);
  printf("[Debug] Headers: \n");
  print_header_debug(req->headers);
}

// Returns 0 if worked
int parseRequest(node_t* headerLines, request** reqPtr) {
  request* req = (request*) malloc(1 * sizeof(request));
  req->method = NULL;
  req->path = NULL;
  req->protokol = NULL;

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

      if (worked != 0 && debug) {
        printf("[Debug][parseRequest] Could not parse Line '%s' \n", current->line);
      }
    }

    current = current->next;
  }

  req->headers = head;

  if (req->method == NULL || req->path == NULL || req->protokol == NULL || req->headers->key == NULL) {
    if (debug) {
      printf("[Debug][parseRequest] Not everything has been set \n");
      printf("[Debug][parseRequest] Method: '%p', Path: '%p', Protokol: '%p', First Header Key: '%p' \n", req->method, req->path, req->protokol, req->headers->key);
    }

    return 1;
  }

  *reqPtr = req;

  return 0;
}
int cleanRequest(request* reqPtr) {
  free(reqPtr->method);
  free(reqPtr->path);
  free(reqPtr->protokol);

  cleanHeader(reqPtr->headers);

  free(reqPtr);
}

int readHTTP(int socketFd, char** buffer, int bufferSize) {
  char* readBuffer = (*buffer);

  int received = recv(socketFd, readBuffer, bufferSize, 0);
  if (received < 1) {
    if (received == 0 && debug) {
      printf("[Debug][readHTTP] Connection Closed \n");
    }

    return 1;
  }

  return received;
}
node_t* splitHTTPRequest(char** buffer, int bufferLength) {
  char message[bufferLength + 1];
  strncpy(message, (*buffer), bufferLength + 1);
  message[bufferLength] = '\0';

  node_t* head = (node_t*) malloc(1 * sizeof(node_t));
  head->next = NULL;
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

  if (debug) {
    printf("[Debug][receiveRequest] Read %d Bytes \n", readBytes);
  }

  node_t* head = splitHTTPRequest(&readBuffer, readBytes);

  free(readBuffer);

  request* req;
  int worked = parseRequest(head, &req);
  if (worked != 0) {
    if (debug) {
      printf("[Debug][receiveRequest] Error parsing Request \n");
    }

    return 1;
  }

  cleanHeaderLines(head);

  *reqPtr = req;

  return 0;
}

// Files stuff //
int getFileName(char* folder, char* path, char** filePath) {
  int folderLength = 1;
  while (folder[folderLength - 1] != '\0') {
    folderLength++;
  }
  folderLength--;
  int pathLength = 1;
  while (path[pathLength - 1] != '\0') {
    pathLength++;
  }
  pathLength--;
  int totalLength = folderLength + pathLength;

  char* file = (char*) malloc((totalLength + 1) * sizeof(char));
  for(int i = 0; i < totalLength; i++) {
    if (i < folderLength) {
      file[i] = folder[i];
    }else {
      file[i] = path[i - folderLength];
    }
  }
  file[totalLength] = '\0';

  if (file[totalLength - 1] == '/') {
    int nLength = totalLength + 10;
    char* nFile = (char*) malloc((nLength + 1) * sizeof(char));

    for (int i = 0; i < nLength; i++) {
      if (i < totalLength) {
        nFile[i] = file[i];
      }
    }
    nFile[nLength - 10] = 'i';
    nFile[nLength - 9] = 'n';
    nFile[nLength - 8] = 'd';
    nFile[nLength - 7] = 'e';
    nFile[nLength - 6] = 'x';
    nFile[nLength - 5] = '.';
    nFile[nLength - 4] = 'h';
    nFile[nLength - 3] = 't';
    nFile[nLength - 2] = 'm';
    nFile[nLength - 1] = 'l';
    nFile[nLength] = '\0';

    free(file);
    file = nFile;
    totalLength = nLength;
  }

  int hasEnding = 0;
  for (int i = 0; i < totalLength; i++) {
    if(file[i] == '.' && i < (totalLength - 1)) {
      hasEnding = 1;
      break;
    }
  }

  if (hasEnding == 0) {
    int nLength = totalLength + 5;
    char* nFile = (char*) malloc((nLength + 1) * sizeof(char));

    for (int i = 0; i < nLength; i++) {
      if (i < totalLength) {
        nFile[i] = file[i];
      }
    }
    nFile[nLength - 5] = '.';
    nFile[nLength - 4] = 'h';
    nFile[nLength - 3] = 't';
    nFile[nLength - 2] = 'm';
    nFile[nLength - 1] = 'l';
    nFile[nLength] = '\0';

    free(file);
    file = nFile;
    totalLength = nLength;
  }

  *filePath = file;

  return 0;
}

int readFile(char* fileName, char** result) {
  int size = 0;
	FILE *f = fopen(fileName, "rb");
	if (f == NULL) {
		*result = NULL;
		return -1; // -1 means file opening fail
	}
	fseek(f, 0, SEEK_END);
	size = ftell(f);
	fseek(f, 0, SEEK_SET);
	*result = (char *)malloc(size+1);
	if (size != fread(*result, sizeof(char), size, f)) {
		free(*result);
		return -2; // -2 means file reading fail
	}
	fclose(f);
	(*result)[size] = 0;
	return size;
}

int loadData(request* reqPtr, char** rawData) {
  char* folder = "website";
  char* path = reqPtr->path;

  char* fileName;
  int worked = getFileName(folder, path, &fileName);
  if (worked != 0) {
    return -1;
  }

  char* data;
  int readBytes = readFile(fileName, &data);
  if (readBytes < 0) {
    return -1;
  }

  free(fileName);

  *rawData = data;

  return readBytes;
}


typedef struct response {
  int statusCode;
  char* statusMessage;
  char* protokol;
  headerNode_t* headers;
  char* data;
  int dataSize;
} response;

int addHeader(response* respPtr, char* key, char* value) {
  int keyLength = 0;
  int valueLength = 0;
  while(key[keyLength] != '\0') {
    keyLength++;
  }
  while(value[valueLength] != '\0') {
    valueLength++;
  }

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

void print_response_debug(response* respPtr) {
  if (debug == 0) {
    return;
  }

  printf("[Debug] Printing Response: \n");
  printf("[Debug] Statuscode: %d \n", respPtr->statusCode);
  printf("[Debug] Statusmessage: %s \n", respPtr->statusMessage);
  printf("[Debug] Protokol: %s \n", respPtr->protokol);
  printf("[Debug] Headers: \n");
  print_header_debug(respPtr->headers);
  printf("[Debug] Data: %s \n", respPtr->data);
}

response* createResponse(int statusCode, char* statusMessage, char* protokol) {
  response* resp = (response*) malloc(1 * sizeof(response));
  resp->headers = NULL;

  resp->protokol = protokol;
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
  int protokolLength = 0;
  while(respPtr->protokol[protokolLength] != '\0') {
    protokolLength++;
  }

  char statusCode[12];
  sprintf(statusCode, "%d", respPtr->statusCode);
  int statusCodeLength = 0;
  while(statusCode[statusCodeLength] != '\0') {
    statusCodeLength++;
  }

  int statusMessageLength = 0;
  while(respPtr->statusMessage[statusMessageLength] != '\0') {
    statusMessageLength++;
  }

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
  int spacerLength = 0;
  while(spacer[spacerLength] != '\0') {
    spacerLength++;
  }

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

int determinContentType(char* path, char** result) {
  int dot = -1;
  int length = -1;
  for(int i = 0; 1; i++) {
    if (path[i] == '.') {
      dot = i + 1;
    }

    if (path[i] == '\0') {
      length = i;
      break;
    }
  }

  if(dot == -1 || length == -1) {
    (*result) = (char*) malloc(23 * sizeof(char));
    strcpy((*result), "text/html;charset=UTF-8");

    return 0;
  }

  int extensionLenght = length - dot;
  char* extension = (char*) malloc((extensionLenght + 1) * sizeof(char));
  extension[extensionLenght] = '\0';
  for (int i = 0; i < extensionLenght; i++) {
    extension[i] = path[i + dot];
  }

  if(strcmp(extension, "html") == 0) {
    (*result) = (char*) malloc(23 * sizeof(char));
    strcpy((*result), "text/html;charset=UTF-8");
  }else if(strcmp(extension, "css") == 0) {
    (*result) = (char*) malloc(22 * sizeof(char));
    strcpy((*result), "text/css;charset=UTF-8");
  }else if(strcmp(extension, "js") == 0) {
    (*result) = (char*) malloc(29 * sizeof(char));
    strcpy((*result), "text/javascript;charset=UTF-8");
  }else if(strcmp(extension, "jpg") == 0) {
    (*result) = (char*) malloc(9 * sizeof(char));
    strcpy((*result), "image/png");
  }else if(strcmp(extension, "png") == 0) {
    (*result) = (char*) malloc(9 * sizeof(char));
    strcpy((*result), "image/png");
  }else {
    (*result) = (char*) malloc(18 * sizeof(char));
    strcpy((*result), "text;charset=UTF-8");
  }

  free(extension);
  return 0;
}

int sendResponse(int connection, response* respPtr) {
  char* httpResponse;
  int respSize = createHTTPResponse(respPtr, &httpResponse);

  write(connection, httpResponse, respSize);

  free(httpResponse);
}

int sendMissingFile(int connection, request* reqPtr) {
  response* resp = createResponse(404, "Not Found", reqPtr->protokol);

  sendResponse(connection, resp);

  cleanResponse(resp);
}

// Returns 0 if no error occured
int handleConnection(int conFd) {
  // Receiving and parsing the Request
  request* req;
  int worked = receiveRequest(conFd, &req);
  if (worked != 0) {
    printf("[Error] Receiving Request: %d \n", worked);
    return 1;
  }

  print_request_debug(req);

  char* data;
  int size = loadData(req, &data);
  if (size < 0) {
    printf("[Error] Loading Data: %d \n", worked);

    sendMissingFile(conFd, req);
    cleanRequest(req);

    return 1;
  }

  response* resp = createResponse(200, "OK", req->protokol);
  setData(resp, data, size);

  char* contentType;
  determinContentType(req->path, &contentType);
  setContent(resp, contentType, size);

  print_response_debug(resp);

  sendResponse(conFd, resp);

  if (debug) {
    printf("[Debug][handleConnection] Cleaning Up \n");
  }

  free(contentType);

  cleanRequest(req);
  cleanResponse(resp);

  return 0;
}

int createServer(int port) {
  struct sockaddr_in addr;
  int fd;

  fd = socket(AF_INET, SOCK_STREAM, 0);
  if(fd == -1)
  {
      printf("Error opening socket\n");
      return -1;
  }

  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = 0;
  addr.sin_addr.s_addr = INADDR_ANY;
  addr.sin_family = AF_INET;

  if(bind(fd, (struct sockaddr *)&addr,sizeof(struct sockaddr_in) ) == -1)
  {
      printf("Error binding socket\n");
      return -1;
  }

  printf("Successfully bound to port %u\n", port);

  return fd;
}

int startServer(int serverFd) {
  if (listen(serverFd, SOMAXCONN)) {
    printf("[Error] failed to listen for connections \n");
  }

  signal(SIGCHLD,SIG_IGN);

  printf("[Info] Now waiting for connections \n");
  while (1) {
    int session_fd = accept(serverFd, 0, 0);

    if (fork() == 0) {
      handleConnection(session_fd);

      int worked = close(session_fd);
      if (worked < 0) {
        printf("[Error] closing connection \n");
      }

      exit(0);
    }else {
      close(session_fd);
    }
  }

  return 0;
}

int getPort(char** args, int argCount) {
  for (int i = 0; i < argCount; i++) {
    if(strcmp(args[i], "-p") == 0) {
      if (i < argCount - 1) {
        int port;
        sscanf(args[i + 1], "%d", &port);

        return port;
      }
    }
  }

  return 80;
}

int checkDebug(char** args, int argCount) {
  for (int i = 0; i < argCount; i++) {
    if (strcmp(args[i], "-d") == 0) {
      printf("[Info] Debug Enabled \n");

      return 1;
    }
  }

  return 0;
}

int main(int argc, char *argv[]) {
  debug = checkDebug(argv, argc);
  int port = getPort(argv, argc);

  printf("[Info] Starting on Port %d... \n", port);

  int serverFd = createServer(port);
  if (serverFd < 0) {
    return 0;
  }

  startServer(serverFd);

  return 0;
}
