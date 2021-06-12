void	ft_bzero(void *s size_t n)
{
	size_t	i;
	
	i = 0;
	for (i = 0 ; i < n ; i++)
		*(s + i) = 0;
}

#include <strings.h>
#include <stdio.h>

int main()
{
	char arr1[] = "hello world";
	char arr2[] = "hello world";

	//ft_bzero(arr2, 5*sizeof(char));
	bzero(arr1,5*sizeof(char));
	printf("%s",arr1);
}//보류
