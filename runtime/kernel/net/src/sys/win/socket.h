#ifndef __SOCKET_H__
#define __SOCKET_H__

#ifndef  _WINSOCKAPI_
#include <winsock.h>
#endif //_WINSOCKAPI_


const int _EWOULDBLOCK = WSAEWOULDBLOCK;
const int _ECONNRESET = WSAECONNRESET;


typedef int socklen_t;

#endif __SOCKET_H__