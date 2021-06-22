/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:33:01 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 20:42:33 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			leftcheck(char const *p, char const *set, int i)
{
	int		k;

	while (p[i])
	{
		k = 0;
		while (set[k])
		{
			if (p[i] == set[k])
				break ;
			k++;
		}
		if (set[k] == 0)
			return (i);
		i++;
	}
	return (i - 1);
}

int			rightcheck(char const *p, char const *set, int i)
{
	int		k;

	while (i >= 0)
	{
		k = 0;
		while (set[k])
		{
			if (p[i] == set[k])
				break ;
			k++;
		}
		if (set[k] == 0)
			return (i);
		i--;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		leftcase;
	int		rightcase;

	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return ((char *)s1);
	leftcase = leftcheck(s1, set, 0);
	rightcase = rightcheck(s1, set, ft_strlen(s1) - 1);
	if (rightcase < leftcase)
		return (ft_strdup(""));
	if (!(p = (char *)malloc(sizeof(char) * rightcase - leftcase + 2)))
		return (0);
	ft_strlcpy(p, s1 + leftcase, rightcase - leftcase + 2);
	return (p);
}
