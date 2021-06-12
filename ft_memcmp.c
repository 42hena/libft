#include <stdlib.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	while (*s1 || *s2)
	{
		*s1 > *s2 ?  return (*s1-*s2) : return (*s1-*s2);
	}
	return (0);
}