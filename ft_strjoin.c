/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:23:35 by hena              #+#    #+#             */
/*   Updated: 2021/06/21 20:14:32 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		cnt;
	char	*p;
	int		i;
	int		j;

	cnt = 0;
	cnt += ft_strlen(s1);
	cnt += ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * cnt + 1);
	j = 0;
	while (s1[j])
	{
		p[j] = s1[j];
		j++;
	}
	i = j;
	j = 0;
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = 0;
	return (p);
}
