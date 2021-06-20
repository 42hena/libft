/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:59:37 by hena              #+#    #+#             */
/*   Updated: 2021/06/20 20:41:53 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*q;


	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	i = 0;
	if (p == 0 || q == 0)
		return (0);
	while (i < n && (*p || *q))
	{
		if (*p != *q)
			return (*p > *q ? (*p - *q) : (*p - *q));
		p++;
		q++;
	}
	return (0);
}
