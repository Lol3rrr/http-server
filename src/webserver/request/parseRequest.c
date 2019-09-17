#include "../headerFiles/request.h"

int isFirstLine(char* line) {
  int seperator = findStr(line, ":", -1, 1);

  if (seperator == -1)
    return 1;

  return 0;
}

// Returns 0 if worked
int parseRequest(headerLine_t* headerLines, request** result) {
  clock_t startTime = clock();

  request* req = (request*) malloc(1 * sizeof(request));
  req->method = NULL;
  req->path = NULL;
  req->protokol = NULL;
  req->headers = NULL;
  req->body = NULL;
  req->bodyLength = -1;

  headerLine_t* current = headerLines;

  headers_t* head = createEmptyHeaders();

  while (current->next != NULL) {
    char* key = NULL;
    char* value = NULL;

    if (isFirstLine(current->line)) {
      int worked = parseFirstLine(current->line, &(req->method), &(req->path), &(req->protokol));

      if (worked != 0) {
        logDebug("[parseRequest] Could not parse First-Line '%s' \n", current->line);
      }
    }else {
      int worked = parseHeader(current->line, &key, &value);
      if (worked == 0) {
        pushHeader(head, key, value);
        free(key);
        free(value);
      }
    }

    current = current->next;
  }

  req->headers = head;

  if (hasEmptyField(req)) {
    logDebug("[parseRequest] Not everything has been set \n");
    logDebug("[parseRequest] Method: '%p', Path: '%p', Protokol: '%p', First Header Key: '%p' \n", req->method, req->path, req->protokol, req->headers->kvNodes);

    cleanRequest(req);

    return 1;
  }

  if (findStr(req->path, "..", -1, -1) != -1) {
    logDebug("[parseRequest] Found a '..' in the path \n");

    return 2;
  }

  *result = req;

  clock_t endTime = clock();
  if (isMeasuringEnabled()) {
    double time_spent = (double) (endTime - startTime) / CLOCKS_PER_SEC;
    logMeasuring("[parseRequest] Took %f Seconds \n", time_spent);
  }

  return 0;
}
