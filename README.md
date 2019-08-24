# HTTP-Server
A HTTP-Server completly written in ansi-C.
Though it only works on linux at the moment. 

## Features
- Serve static Files
- Completly parses the Headers received

## Command line Arguments
- "-p [port]" sets the port where it should listen on (default is 80)
- "-c" enables the Cache-Control-Header with a default Cache time of 1 Day
- "-d" enables the Debug mode

## Plans
- Make it possible to simply add it to existing programs
- Add the Cache from the HTTP-Spec
