#include "../headerFiles/response.h"

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
  itoa(cacheValue, cacheValueStr);
  int cacheValueLength = strlen(cacheValueStr);
  int preCacheLength = 16;

  char cacheHeader[28];

  memcpy(cacheHeader, "public, max-age=", 16);
  memcpy(cacheHeader + 16, cacheValueStr, cacheValueLength);

  string key = {
    .content = "Cache-Control",
    .length = 13,
    .needsFree = 0
  };
  string value = {
    .content = cacheHeader,
    .length = 16 + cacheValueLength,
    .needsFree = 0
  };
  addHeader(respPtr, key, value);

  return 0;
}
