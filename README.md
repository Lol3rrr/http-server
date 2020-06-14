# HTTP-Server
A HTTP-Server completly written in ansi-C.
Though it only works on linux at the moment.

## Code-Checks
[![CodeFactor](https://www.codefactor.io/repository/github/lol3rrr/http-server/badge)](https://www.codefactor.io/repository/github/lol3rrr/http-server)
[Benchmark Results](https://lol3rrr.github.io/http-server/master/bench/)

## Features
* Serve static Files
* Can be implemented into any other project to handle (GET) Requests
* Can expose port 9001 to allow for monitoring using prometheus

## Command line Usage
Simply compile the code and execute the resulting binary to start a simple Webserver

### Command line Arguments
* "-p [port]"  sets the port where it should listen on (default is 80)
* "-t [count]" sets the number of threads used to handle requests (default is 100)
* "-c"         enables the Cache-Control-Header with a default Cache time of 1 Day
* "-d"         enables the Debug mode
* "-m"         enables the measuring of the performance of the most important functions (should only be used for optimization)
* "-t"         enables the Templating System
* "-ic"        enables the internal caching system, loads all files in the website/ directory on startup. Needs restart to reload them

### Templating System

#### Features
- include an html file in another html file

#### Usage
To include a file you simply add `<--include path="path to file"/>` to your html file.
It will load the specified file and replace the tag with the content of said file.

Note: The path to the file has to start with a '/' otherwise it cant find it.

#### Error Handling
When a specified file can not be found it simply removes the tag.

## Implementing into existing project

### Adding it to the project
'All' you need is to add the 'src/webserver' folder to your project and include the 'server.h' header, this should include everything you need.

An example for this can be seen in the 'examples' directory, where you can also find different use cases.

### Starting the Webserver
To create a Server you simple need to run:
`int serverFd = createServer(port);`

To then start the server up run:
`startServer(serverFd);`

Note: The `startServer()` function is going to block the Thread so if you want to have it in the background you need to execute it in another Thread.

### Options
* You can enable Debug mode by running `setDebugMode(1);`
* You can enable the use of Cache-Headers by running `setGeneralCaching(1);`
* You can enable the Measuring of the speed by running `setMeasureExec(1);` (mostly only used in optimizing the webserver itself)
* You can enable the Templating System by running `setGeneralTemplateUsage(1);` (this only affects the serving of static files)

### Adding custom Paths
Note: This feature is still in development, so it can still have some problems or unfinished parts.
To add a Custom Path simply run `addCustomPath(Method, Path, function);`
This will route every Request with the same Path as specified to the given function.

The function should look something like this
`int name(request* req, response* resp);`
and return a 0 if everything worked or a value that is smaller than 0 if something went wrong

### Important Functions
`setStatus(response, statusCode, statusMessage);`
  * response: A pointer to the response struct
  * statusCode: An integer that represents the Status Code for the Response (ex. 200, 404, etc.)
  * statusMessage: The corresponding Status Message to the Status Code
`setData(response, responseData, dataLength);`
  * response: A pointer to the response struct
  * responseData: A char* that contains the Response-Body, the value it points to needs to persist outside of your function and will be freed for you afterwards
  * dataLength: The Length of the responseData, as an integer
`setContentType(response, contentType, contentLength)`
  * response: A pointer to the response struct
  * contentType: A char* that contains the Content-Type, this is only used for the 'Content-Type' Header
  * contentLength: The Length of the content itself, as an integer
