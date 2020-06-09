#include "../server.h"

void determinContentTypeBench() {
  determinContentTypeBench_NoExtension();
  determinContentTypeBench_HTML();
  determinContentTypeBench_JS();
  determinContentTypeBench_CSS();
  determinContentTypeBench_IMAGE();
  determinContentTypeBench_OTHER();
}