/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:59:37 by hena              #+#    #+#             */
/*   Updated: 2021/06/20 14:59:53 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;

	p = s1;
	q = s2;
	i = 0;
	while (i < n && (*p || *q))
	{
		if (*p != *q)
			return (*p > *q ? (*p - *q) : (*p - *q));
		p++;
		q++;
	}
	return (0);
}
