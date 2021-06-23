/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:22:31 by hena              #+#    #+#             */
/*   Updated: 2021/06/23 16:01:20 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	if (count == 0)
	{
		p = malloc(1);
		ft_strdup("");
	}
	p = malloc(count * size);
	if (!p)
		return (0);
	i = 0;
	while (i < count * size)
	{
		*((unsigned char *)p + i) = 0;
		i++;
	}
	return (p);
}
