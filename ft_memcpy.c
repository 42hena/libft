/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:41:40 by hena              #+#    #+#             */
/*   Updated: 2021/06/20 14:46:54 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *restrict dst,
		const void *restrict src, size_t n)
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
		i++;
	}
	return (p);
}
