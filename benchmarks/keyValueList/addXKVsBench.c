#include "../keyValueList.h"

void addXKVsBench(int count) {
  string* keys = (string*) malloc(count * sizeof(string));
  string* values = (string*) malloc(count * sizeof(string));

  for (int i = 0; i < count; i++) {
    int length = 2 + 13;
    string tmpKey = {
      .length = length,
      .content = createEmptyCString(length)
    };
    string tmpValue = {
      .length = length,
      .content = createEmptyCString(length)
    };

    sprintf(tmpKey.content, "K-%06d", i);
    sprintf(tmpValue.content, "V-%06d", i);

    keys[i] = tmpKey;
    values[i] = tmpValue;
  }

  long int total = addKVBench(count, keys, values);

  char nameBuffer[21];
  sprintf(nameBuffer, "Push %06d-KV-Pairs", count);
  nameBuffer[20] = '\0';
  printRawDuration("Key Value List", nameBuffer, total);
}