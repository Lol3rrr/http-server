#include <stdio.h>
#include <string.h>

#include "webserver/server.h"

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

int test(request* req, response* resp) {
  printf("Called test \n");

  return -1;
}

int main(int argc, char *argv[]) {
  int debug = checkFlag(argv, argc, "-d");
  int caching = checkFlag(argv, argc, "-c");
  int measureExec = checkFlag(argv, argc, "-m");
  int template = checkFlag(argv, argc, "-t");

  setDebugMode(debug);
  setGeneralCaching(caching);
  setMeasureExec(measureExec);
  setGeneralTemplateUsage(template);

  int port = getPort(argv, argc);

  printf("[Info] Starting on Port %d... \n", port);

  int serverFd = createServer(port);
  if (serverFd < 0) {
    return 0;
  }

  //addCustomPath("GET", "/", handleGETrequest);

  startServer(serverFd);

  return 0;
}
