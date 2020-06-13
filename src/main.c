#include <stdio.h>
#include <string.h>

#include "webserver/server.h"

int getNumber(char** args, int argCount, char* flag, int defaultValue) {
  for (int i = 0; i < argCount; i++) {
    if(strcmp(args[i], flag) == 0) {
      if (i < argCount - 1) {
        int value;
        sscanf(args[i + 1], "%d", &value);

        return value;
      }
    }
  }

  return defaultValue;
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
  int template = checkFlag(argv, argc, "-t");
  int internalCache = checkFlag(argv, argc, "-ic");

  setDebugMode(debug);
  setGeneralCaching(caching);
  setMeasureExec(measureExec);
  setGeneralTemplateUsage(template);
  setInternalCacheUsage(internalCache);

  int port = getNumber(argv, argc, "-p", 80);
  int threads = getNumber(argv, argc, "-t", DEFAULT_THREAD_COUNT);

  printf("[Info] Starting on Port %d... \n", port);

  server_t* server;
  int serverFd = createServer(port, threads, &server);
  if (serverFd < 0) {
    return 0;
  }

  //addCustomPath("GET", "/", handleGETrequest);

  startServer(server);

  return 0;
}
