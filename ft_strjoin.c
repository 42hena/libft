/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:23:35 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 16:34:29 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		cnt;
	char	*p;
	int		i;
	int		j;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	cnt = ft_strlen(s1) + ft_strlen(s2);
	if (!(p = (char *)malloc(sizeof(char) * cnt + 1)))
		return (NULL);
	j = -1;
	while (s1[++j])
	{
		p[j] = s1[j];
	}
	i = j;
	j = -1;
	while (s2[++j])
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = 0;
	return (p);
}
