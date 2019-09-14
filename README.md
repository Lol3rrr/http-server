# HTTP-Server
A HTTP-Server completly written in ansi-C.
Though it only works on linux at the moment.

## Code-Checks
[![CodeFactor](https://www.codefactor.io/repository/github/lol3rrr/http-server/badge)](https://www.codefactor.io/repository/github/lol3rrr/http-server)

## Features
* Serve static Files
* Can be implemented into any other project to handle (GET) Requests

## Command line Usage
Simply compile the code and execute the resulting binary to start a simple Webserver

### Command line Arguments
* "-p [port]" sets the port where it should listen on (default is 80)
* "-c" enables the Cache-Control-Header with a default Cache time of 1 Day
* "-d" enables the Debug mode
* "-m" enables the measuring of the performance of the most important functions (mainly used for optimizing code)
* "-t" enables the Templating System

### Templating System

#### Features
- include an html file in another html file

#### Usage
To include a file you simply add `<--include path="path to file">` to your html file.
It will load the specified file and replace the tag with the content of said file.

Note: The path to the file has to start with a '/' otherwise it cant find it.

### Error Handling
When a specified file can not be found it simply removes the tag.

## Implementing into existing project

### Adding it to the project
'All' you need is to add the 'src/webserver' folder to your project and include the 'server.h' header, this should include everything you need

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
Note: This feature is still in development so it very likely still has some problems
To add a Custom Path simply run `addCustomPath(Method, Path, function);`
This will route every Request with the same Path as specified to the given function.

The function should look something like this
`int name(request* req, response* resp);`
and return a 0 if everything worked or a value that is not 0 if something went wrong

## Future - Plans
* Make it possible to simply add it to existing programs
  * Parse the request body
  * Parse the Query-params of the Request
  * Also POST-Requests 
* Fully add the Cache from the HTTP-Spec
