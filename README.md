# HTTP-Server
A HTTP-Server completly written in ansi-C.
Though it only works on linux at the moment.

## Code-Checks
[![CodeFactor](https://www.codefactor.io/repository/github/lol3rrr/http-server/badge)](https://www.codefactor.io/repository/github/lol3rrr/http-server)

## Features
- Serve static Files
- Completly parses the Headers received

## Command line Arguments
- "-p [port]" sets the port where it should listen on (default is 80)
- "-c" enables the Cache-Control-Header with a default Cache time of 1 Day
- "-d" enables the Debug mode
- "-m" enables the measuring of the performance of the most important functions (mainly used for optimizing code)

## Plans
- Make it possible to simply add it to existing programs
- Add the Cache from the HTTP-Spec
