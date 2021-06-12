#include <stdlib.h>
void*	ft_memcpy(void *dst, const void * src, size_t n)
{
	unsigned int	i;

	for(i = 0  ; i < n ; i++)
	{
		*((char*)dst + i) = *((char*)src + i);
	}
}
