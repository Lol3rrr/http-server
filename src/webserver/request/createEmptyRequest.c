#include "../headerFiles/request.h"

request createEmptyRequest() {
  request req;
  req.path.content = NULL;
  req.path.content = NULL;
  req.path.length = -1;
  req.protokol.content = NULL;
  req.protokol.length = -1;
  req.headers = createEmptyHeaders();
  req.body.content = NULL;
  req.body.needsFree = 0;

  return req;
}