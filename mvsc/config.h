#ifndef CONFIG_H
#define CONFIG_H

#if defined(_MSC_VER)

#  define strcasecmp   _stricmp
#  define inline __inline
#  define S_IRWXU 0
#  define __attribute__(x) /**/

# include <math.h>
static inline double round(double d)
{
	double c = ceil(d);
    double f = floor(d);
    if (d - f < .5)
		return f;
     else
		return c;
}
#endif

#endif/*!CONFIG_H*/