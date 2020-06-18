#ifndef CROSS_H
#define CROSS_H

#ifdef __unix__
#define UNIX 
#elif defined(_WIN32) || defined(WIN32)
#define WINDOWS
#endif

// Includes
#ifdef UNIX
// Socket stuff
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

// Thread stuff
#include <pthread.h>
#endif

#ifdef UNIX
typedef int c_socket;
#endif

c_socket c_createSocket(int port);
int c_listen(c_socket serverSock);
c_socket c_accept(c_socket serverSock);
int c_close(c_socket serverSock);
int c_recv(c_socket serverSock, char* buffer, int length);
int c_send(c_socket serverSock, char* buffer, int bufferSize, int flags);
int c_createDetachedThread(void* (*f) (void* arg), void* arg);


#endif
