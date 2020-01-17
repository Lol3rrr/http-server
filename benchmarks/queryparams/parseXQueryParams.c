#include "../queryparams.h"

void parse1QueryParamsBench() {
  double total = parseQueryParamsBench("/testPage?key=value");

  printDuration("QueryParams", "Parse 01-Parameters", total);
}

void parse2QueryParamsBench() {
  double total = parseQueryParamsBench("/testPage?key=value&key=value");

  printDuration("QueryParams", "Parse 02-Parameters", total);
}

void parse5QueryParamsBench() {
  double total = parseQueryParamsBench("/testPage?key=value&key=value&key=value&key=value&key=value");

  printDuration("QueryParams", "Parse 05-Parameters", total);
}

void parse10QueryParamsBench() {
  double total = parseQueryParamsBench("/testPage?key=value&key=value&key=value&key=value&key=value&key=value&key=value&key=value&key=value&key=value");

  printDuration("QueryParams", "Parse 10-Parameters", total);
}
