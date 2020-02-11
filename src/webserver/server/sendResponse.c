#include "../server.h"

#define BUFFERSIZE 1024

int sendResponse(int connection, response* respPtr) {
  string* headResponse;
  string* bodyResponse;
  int worked = createHTTPResponse(respPtr, &headResponse, &bodyResponse);

  int flags = (bodyResponse != NULL) ? MSG_DONTWAIT | MSG_MORE : 0;

  send(connection, headResponse->content, headResponse->length, flags);

  if (bodyResponse != NULL) {
    send(connection, bodyResponse->content, bodyResponse->length, 0);
    free(bodyResponse);
  }

  if (respPtr->streaming) {
    int hasMore = 1;
    char content[BUFFERSIZE];

    while (hasMore) {
      int read = fread(content, sizeof(char), BUFFERSIZE, respPtr->file);
      hasMore = read >= BUFFERSIZE;

      logDebug("[handleGETrequest] Read: %d \n", read);

      int tmpFlag = (hasMore) ? MSG_DONTWAIT | MSG_MORE : 0;
      send(connection, content, read, tmpFlag);
    }

    fclose(respPtr->file);
  }

  free(headResponse->content);
  free(headResponse);
}
