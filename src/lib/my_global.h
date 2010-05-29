#ifndef _global_h
#define _global_h

#include <cstring>

#ifdef _WIN32
#define bzero(p, l) memset(p, 0, l)
#endif

typedef unsigned int uint;
typedef unsigned short  uint16; /* Short for unsigned integer >= 16 bits */
typedef unsigned long   ulong;            /* Short for unsigned long */
typedef unsigned long long int ulonglong; /* ulong or unsigned long long */
typedef long long int   longlong;
typedef char    pchar;          /* Mixed prototypes can take char */
typedef char    pbool;          /* Mixed prototypes can take char */
typedef unsigned char   uchar;  /* Short for unsigned char */
typedef char            my_bool; /* Small bool */

#endif /* my_global_h */

