#include "../server.h"

#define BUFFERSIZE 2048

int sendResponse(int connection, response* respPtr) {
  string headResponse;
  string bodyResponse;
  int worked = createHTTPResponse(respPtr, &headResponse, &bodyResponse);

  int flags = (bodyResponse.content != NULL || respPtr->streaming) ? MSG_DONTWAIT | MSG_MORE : 0;

  send(connection, headResponse.content, headResponse.length, flags);
  cleanString(headResponse);

  if (respPtr->streaming) {
    int hasMore = 1;
    char content[BUFFERSIZE];

    while (hasMore) {
      int read = fread(content, sizeof(char), BUFFERSIZE, respPtr->file.fd);
      hasMore = read >= BUFFERSIZE;

      int tmpFlag = (hasMore) ? MSG_DONTWAIT | MSG_MORE : 0;
      send(connection, content, read, tmpFlag);
    }

    return 0;
  }


  if (bodyResponse.content != NULL) {
    send(connection, bodyResponse.content, bodyResponse.length, 0);
  }

  return 0;
}
