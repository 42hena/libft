/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:41:40 by hena              #+#    #+#             */
/*   Updated: 2021/06/20 15:47:11 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst,
		const void *src, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		*((unsigned char*)dst + i) = *((unsigned char*)src + i);
		i++;
	}
	return (dst);
}
