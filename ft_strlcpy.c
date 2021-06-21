/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:04:26 by hena              #+#    #+#             */
/*   Updated: 2021/06/21 18:17:46 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	temp;

	i = 0;
	temp = ft_strlen(src);
	while (i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = 0;
	return (i + temp);
}

int main()
{
	char str1[] = "hello world";
	char str2[] = "qwer";
	char str3[] = "hello world";
	char str4[] = "qwer";
	int	n;

	scanf("%d", &n);

	printf("%ld\n", strlcpy(str1,str2,n));
	printf("%s\n",str1);

	printf("%ld\n", ft_strlcpy(str3,str4,n));
	printf("%s",str3);
}
