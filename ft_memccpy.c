/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:49:46 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 14:53:48 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst,
		const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	p = dst;
	q = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		p[i] = q[i];
		if ((unsigned char)c == q[i])
			break ;
	}
	if (i == n)
		return ((void*)0);
	else
		return (dst + i + 1);
}
