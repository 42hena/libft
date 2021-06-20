/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:49:46 by hena              #+#    #+#             */
/*   Updated: 2021/06/20 14:51:00 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	dst = p;
	src = q;
	i = 0;
	while (i < n)
	{
		*(p + i) = *(q + i);
		if ((unsigned char)c == *(q + i))
			break ;
		i++;
	}
	if (i == n)
		return ((void*)0);
	else
		return (p + i + 1);
}
