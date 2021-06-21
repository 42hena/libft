/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:12:05 by hena              #+#    #+#             */
/*   Updated: 2021/06/21 23:55:04 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *)s;
	i = 0;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i--;
	}
	return (0);
}
