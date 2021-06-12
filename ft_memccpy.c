#include <stdlib.h>
void*	ft_memcpy(void *dst, const void * src, int c, size_t n)
{
	int isFind;
	size_t i;
	isFind = 0;
	for(i = 0  ; i < n ; i++)
	{
		*((char*)dst + i) = *((char*)src + i);
		if (unsigned char)c == *((unsigned char *)src+i)
			break;	
	}
	if (i == n)
		return ((void*)0);
	else
		return (dst + i + 1);
}
