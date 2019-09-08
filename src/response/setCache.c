#include "../response.h"

int setCache(response* respPtr, request* reqPtr, int cacheTime) {
  if (isCachingAllowed(reqPtr) != 1) {
    return 0;
  }

  int defaultCacheTime = 24 * 60 * 60;
  int cacheValue = defaultCacheTime;

  if (cacheTime > 0) {
    cacheValue = cacheTime;
  }

  char cacheValueStr[12];
  sprintf(cacheValueStr, "%d", cacheValue);
  int cacheValueLength = getStringLength(cacheValueStr);
  int preCacheLength = 16;

  int cacheHeaderLength = cacheValueLength + preCacheLength;
  char* cacheHeader = createEmptyCString(cacheHeaderLength);

  strncpy(cacheHeader, "public, max-age=", 16);
  strncpy(cacheHeader + 16, cacheValueStr, cacheValueLength);

  addHeader(respPtr, "Cache-Control", cacheHeader);
}
