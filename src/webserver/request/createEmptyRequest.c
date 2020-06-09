#include "../headerFiles/request.h"

request createEmptyRequest() {
  request req;
  req.initialContent = NULL;
  req.path.content = NULL;
  req.path.length = -1;
  req.path.needsFree = 0;
  req.protokol.content = NULL;
  req.protokol.length = -1;
  req.protokol.needsFree = 0;
  req.headers = createEmptyHeaders();
  req.body.content = NULL;
  req.body.length = -1;
  req.body.needsFree = 0;

  return req;
}