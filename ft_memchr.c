#include <stdlib.h>

void * ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	
	for (i = 0 ; i < n ; i++)
	{
		if (c == *((unsigned char)s+i))
			return ((void *)s+i);
	}
	return ((void*)0);
}
