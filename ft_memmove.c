/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:54:28 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 14:54:32 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	p = dst;
	q = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (NULL);
	i = -1;
	if (dst > src)
	{
		while (++i < len)
		{
			p[len - 1 - i] = q[len - 1 - i];
		}
	}
	else
	{
		while (++i < len)
		{
			p[i] = q[i];
		}
	}
	return (dst);
}
