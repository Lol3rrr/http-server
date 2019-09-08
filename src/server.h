#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <signal.h>

// Socket stuff
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "general.h"
#include "request.h"
#include "response.h"

int createServer(int port);
int startServer(int serverFd);

int sendResponse(int connection, response* respPtr);
int sendNotFound(int connection, request* reqPtr);

int determinContentType(char* path, char** result);

int handleGETrequest(int conFd, request* req);
int handleConnection(int conFd);

#endif
