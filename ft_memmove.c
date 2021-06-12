#include <stdlib.h>

void * memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	if (src < dst)
		for (i = len - 1 ; i >= 0; i--)
		{
			*(dst+i) = *(src +i);
		}
	else
		for (i =0  ; i<len ; i++){
			*(dst+i) = *(src+i);
		}
}
