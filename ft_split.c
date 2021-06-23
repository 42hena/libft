/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:12:46 by hena              #+#    #+#             */
/*   Updated: 2021/06/23 15:23:25 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			calcol(char const *s, char c)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while ((s[i] != c) && s[i])
				i++;
		}
	}
	return (cnt);
}

char		**frees(char **p, int second)
{
	int	i;

	i = -1;
	while (++i < second)
		free(p[i]);
	free(p);
	return (0);
}

char		**calrow(char **p, char const *s, char c)
{
	int		i;
	int		cnt;
	char	**q;

	q = p;
	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while ((s[i] != c) && s[i])
			{
				i++;
				cnt++;
			}
			if (!(*p = (char *)malloc(sizeof(char) * cnt + 1)))
				return (frees(q, i));
			p++;
			cnt = 0;
		}
	}
	return (q);
}

char		**putrow(char **p, char const *s, char c)
{
	int		i;
	int		cnt;
	char	**q;

	q = p;
	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			while ((s[i] != c) && s[i])
			{
				(*p)[cnt] = s[i];
				i++;
				cnt++;
			}
			(*p)[cnt] = 0;
			p++;
			cnt = 0;
		}
	}
	return (q);
}

char		**ft_split(char const *s, char c)
{
	int		cnt;
	char	**p;

	cnt = 0;
	if (s == NULL)
		return (0);
	cnt = calcol(s, c);
	if (!(p = (char **)malloc(sizeof(char *) * (cnt + 1))))
		return (0);
	p[cnt] = 0;
	p = calrow(p, s, c);
	p = putrow(p, s, c);
	return (p);
}
