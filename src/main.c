#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <time.h>

// Socket stuff
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>


#include "general.h"
#include "header.h"
#include "request.h"
#include "response.h"

// Files stuff //
int getFileName(char* folder, char* path, char** filePath) {
  int folderLength = getLength(folder);
  int pathLength = getLength(path);
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

  int dot = find(file, ".", totalLength, 1);

  if (dot == -1) {
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

int loadFileName(request* reqPtr, char** fileNameReturn) {
  char* folder = "website";
  char* path = reqPtr->path;

  char* fileName;
  int worked = getFileName(folder, path, &fileName);
  if (worked != 0) {
    return -1;
  }

  (*fileNameReturn) = fileName;

  int fileNameLength = getLength(fileName);

  return fileNameLength;
}
int loadData(char* fileName, char** rawData) {
  char* data;
  int readBytes = readFile(fileName, &data);
  if (readBytes < 0) {
    return -1;
  }

  *rawData = data;

  return readBytes;
}

int determinContentType(char* path, char** result) {
  int length = getLength(path);
  int dot = find(path, ".", length, 1);

  if(dot == -1 || length == -1) {
    (*result) = (char*) malloc(24 * sizeof(char));
    strcpy((*result), "text/html;charset=UTF-8");

    return 0;
  }

  int extensionLenght = length - dot;
  char* extension = (char*) malloc((extensionLenght + 1) * sizeof(char));
  extension[extensionLenght] = '\0';
  for (int i = 0; i < extensionLenght; i++) {
    extension[i] = path[i + dot + 1];
  }

  if(strcmp(extension, "html") == 0) {
    (*result) = (char*) malloc(24 * sizeof(char));
    strcpy((*result), "text/html;charset=UTF-8");
  }else if(strcmp(extension, "css") == 0) {
    (*result) = (char*) malloc(23 * sizeof(char));
    strcpy((*result), "text/css;charset=UTF-8");
  }else if(strcmp(extension, "js") == 0) {
    (*result) = (char*) malloc(30 * sizeof(char));
    strcpy((*result), "text/javascript;charset=UTF-8");
  }else if(strcmp(extension, "jpg") == 0) {
    (*result) = (char*) malloc(10 * sizeof(char));
    strcpy((*result), "image/png");
  }else if(strcmp(extension, "png") == 0) {
    (*result) = (char*) malloc(10 * sizeof(char));
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

  send(connection, httpResponse, respSize, 0);

  free(httpResponse);
}

int sendNotFound(int connection, request* reqPtr) {
  response* resp = createResponse(404, "Not Found", reqPtr->protokol);

  sendResponse(connection, resp);

  cleanResponse(resp);
}

int handleGETrequest(int conFd, request* req) {
  char* fileName;
  int fileNameLength = loadFileName(req, &fileName);
  if (fileNameLength < 0) {
    free(fileName);

    printf("[Error] Loading Filename \n");

    return 1;
  }

  if (isDebug()) {
    printf("[Debug][handleGETrequest] Loading File: '%s' \n", fileName);
  }

  char* data;
  int size = loadData(fileName, &data);
  if (size < 0) {
    printf("[Error] Loading Data: '%d' Loading Filename: '%s' \n", size, fileName);

    free(fileName);

    sendNotFound(conFd, req);
    cleanRequest(req);

    return 1;
  }

  free(fileName);

  response* resp = createResponse(200, "OK", req->protokol);
  setData(resp, data, size);

  char* contentType;
  determinContentType(req->path, &contentType);
  setContent(resp, contentType, size);
  setCache(resp, req, -1);

  print_response_debug(resp);

  sendResponse(conFd, resp);

  if (isDebug()) {
    printf("[Debug][handleGETrequest] Cleaning Up \n");
  }

  free(contentType);

  cleanRequest(req);
  cleanResponse(resp);

  if (isDebug()) {
    printf("[Debug][handleGETrequest] Cleaned up \n");
    printf("[Debug] ---------------- \n");
  }
}

// Returns 0 if no error occured
int handleConnection(int conFd) {
  clock_t startTime = clock();

  // Receiving and parsing the Request
  request* req;
  int worked = receiveRequest(conFd, &req);
  if (worked != 0) {
    printf("[Error] Receiving Request: %d \n", worked);
    return 1;
  }

  print_request_debug(req);

  int handled = 0;
  if (strcmp(req->method, "GET") == 0) {
    handled = handleGETrequest(conFd, req);
  }else {
    sendNotFound(conFd, req);

    free(req);
  }

  clock_t endTime = clock();
  if (isMeasuring()) {
    double time_spent = (double)(endTime - startTime) / CLOCKS_PER_SEC;

    printf("[Measuring][handleConnection] Took %f Seconds \n", time_spent);
  }

  return handled;
}

int createServer(int port) {
  struct sockaddr_in addr;
  int fd;

  fd = socket(AF_INET, SOCK_STREAM, 0);
  if(fd == -1)
  {
      printf("[Error] opening socket\n");
      return -1;
  }

  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = 0;
  addr.sin_addr.s_addr = INADDR_ANY;
  addr.sin_family = AF_INET;

  if(bind(fd, (struct sockaddr *)&addr,sizeof(struct sockaddr_in) ) == -1)
  {
      printf("[Error] binding socket\n");
      return -1;
  }

  printf("[Info] Successfully bound to port %u\n", port);

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

int checkFlag(char** args, int argCount, char* flag) {
  for (int i = 0; i < argCount; i++) {
    if (strcmp(args[i], flag) == 0) {
      return 1;
    }
  }

  return 0;
}

int main(int argc, char *argv[]) {
  int debug = checkFlag(argv, argc, "-d");
  int caching = checkFlag(argv, argc, "-c");
  int measureExec = checkFlag(argv, argc, "-m");

  setGeneralDebug(debug);
  setGeneralCaching(caching);
  setMeasureExec(measureExec);

  int port = getPort(argv, argc);

  printf("[Info] Starting on Port %d... \n", port);

  int serverFd = createServer(port);
  if (serverFd < 0) {
    return 0;
  }

  startServer(serverFd);

  return 0;
}
