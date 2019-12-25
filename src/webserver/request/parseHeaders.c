#include "../headerFiles/request.h"

int isFirstLine(string* line) {
  int seperator = findCharArr(line->content, ":", line->length, 1);
  if (seperator == -1)
    return 1;

  return 0;
}

headers_t* parseHeaders(headerLine_t* headerLines, string** method, string** path, string** protokol) {
  clock_t startTime = clock();

  headers_t* head = createEmptyHeaders();

  int hadFirstLine = 0;

  headerLine_t* current = headerLines;
  while (current->next != NULL) {
    string* key = NULL;
    string* value = NULL;

    if (!hadFirstLine && isFirstLine(current->line)) {
      int worked = parseFirstLine(current->line, method, path, protokol);

      if (worked != 0) {
        logDebug("[parseHeaders] Could not parse First-Line '%s' \n", current->line);
      }

      hadFirstLine = 1;
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

  if (isMeasuringEnabled()) {
    double time_spent = (double) (clock() - startTime) / CLOCKS_PER_SEC;
    logMeasuring("[parseHeaders] Took %f Seconds \n", time_spent);
  }

  return head;
}
