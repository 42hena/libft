/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:54:28 by hena              #+#    #+#             */
/*   Updated: 2021/06/20 19:52:11 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char *q;

	p = dst;
	q = src;
	if (p < q)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(p + i) = *(q + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(p + i) = *(q + i);
			i++;
		}
	}
	return (p);
}
