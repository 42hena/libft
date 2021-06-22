/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:12:46 by hena              #+#    #+#             */
/*   Updated: 2021/03/17 05:40:06 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char ch, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (ch == charset[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_strncpy(char *dest, char *src, int size)
{
	int		i;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

int		calcol(char *str, char *charset)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset) && str[i])
		{
			cnt++;
			while (!is_charset(str[i], charset) && str[i])
				i++;
		}
		i++;
	}
	return (cnt);
}

char	**calrow(char **p, char *str, char *charset)
{
	int		i;
	int		start;
	int		end;
	int		j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (!is_charset(str[i], charset))
		{
			start = i;
			while (!is_charset(str[i], charset) && str[i])
				i++;
			end = i;
			p[j] = (char *)malloc(sizeof(char) * (end - start + 1));
			if (!p[j])
				return (0);
			ft_strncpy(p[j], &str[start], end - start);
			j++;
		}
		i++;
	}
	p[j] = 0;
	return (p);
}

char	**ft_split(char *str, char *charset)
{
	int		cnt;
	int		i;
	char	**p;

	cnt = 0;
	i = 0;
	cnt = calcol(str, charset);
	p = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!p)
		return (0);
	p = calrow(p, str, charset);
	return (p);
}
