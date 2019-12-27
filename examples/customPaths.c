#include <stdio.h>
#include <string.h>

#include "../src/webserver/server.h"

int handleAll(request* reqPtr, response* respPtr) {
  // Creating some arbitrary payload for the Response
  // This would be replaced with your logic
  int length = 3;
  char* responseData = (char*) malloc((length + 1) * sizeof(char));
  responseData[length] = '\0';
  strncpy(responseData, "Hey", length);


  // Setting up the complete Response
  // by Setting the Status to 200, so that everything went alright
  setStatus(respPtr, 200, "OK");
  // and by setting the Data of the Response to the Data we just created/loaded at the top
  setData(respPtr, responseData, length); // The Data needs to still exist after this function exits, so local variables will not work
  // and by setting the Content Type
  setContentType(respPtr, "text", length);

  // Returns 0 to signal that everything worked
  return 0;
}

int handlePing(request* reqPtr, response* respPtr) {
  // Creating some arbitrary payload for the Response
  // This would be replaced with your logic
  int length = 6;
  char* responseData = (char*) malloc((length + 1) * sizeof(char));
  responseData[length] = '\0';
  strncpy(responseData, "Pong!\n", length);


  // Setting up the complete Response
  // by Setting the Status to 200, so that everything went alright
  setStatus(respPtr, 200, "OK");
  // and by setting the Data of the Response to the Data we just created/loaded at the top
  setData(respPtr, responseData, length); // The Data needs to still exist after this function exits, so local variables will not work
  // and by setting the Content Type
  setContentType(respPtr, "text", length);

  // Returns 0 to signal that everything worked
  return 0;
}

// This simulates an error
int handleError(request* reqPtr, response* respPtr) {
  // Calling another internal function
  // Simulating that some error occurred
  int worked = -1;
  if (worked != 0) {
    return -1;
  }

  // Returns 0 to signal that everything worked
  return 0;
}

int main() {
  setDebugMode(0);            // Disabling Debug Mode
  setGeneralCaching(0);       // Disabling General Caching
  setMeasureExec(0);          // Disabling the Measuring of performance
  setGeneralTemplateUsage(0); // Disabling the 'Template Engine'

  int port = 8080;

  printf("[Info] Starting on Port %d... \n", port);

  int serverFd = createServer(port); // Setup the Basics for the Server
  if (serverFd < 0) {
    return 0;
  }

  // Add all Custom Paths
  // If a request does not match any of the paths, it simply returns a '404 Not Found' status
  addCustomPath("GET", "/", handleAll);
  addCustomPath("GET", "/ping", handlePing);
  addCustomPath("GET", "/error", handleError);


  // Starting the Server
  startServer(serverFd); // THIS IS A BLOCKING CALL

  return 0;
}
