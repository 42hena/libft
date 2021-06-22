/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:33:30 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 14:01:56 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	cnt;
	size_t	i;
	char	*p;

	cnt = ft_strlen(s1);
	if (!(p = (char *)ft_calloc(cnt + 1, sizeof(char))))
		return (0);
	i = 0;
	while (i < cnt)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
