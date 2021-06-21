/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:22:31 by hena              #+#    #+#             */
/*   Updated: 2021/06/21 22:23:12 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	p = malloc(count * size);
	if (!p)
		return ((void *)0);
	i = 0;
	while (i < count)
	{
		*((unsigned char *)p + i) = 0;
		i++;
	}
	return (p);
}
