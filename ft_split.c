/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:12:46 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 21:19:57 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_charset(char ch, char c)
{
	if (ch == c)
		return (1);
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

int		calcol(char const *str, char c)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;

	if (is_charset(str[i], c))
		i++;
	while (str[i])
	{
		if (!is_charset(str[i], c) && str[i])
		{
			cnt++;
			while (!is_charset(str[i], c) && str[i])
				i++;
		}
		i++;
	}
	return (cnt);
}

char	**calrow(char **p, char *str, char charset)
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

void	ft_split(char const *s, char c)
{
	int		cnt;
	int		i;
	char	**p;

	cnt = 0;
	i = 0;
	if (s == NULL)
		return ;
	cnt = calcol(s, c);
	p = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!p)
		return ;
	printf("%d",cnt);
	//p = calrow(p, str, charset);
	//return (p);
}

int main()
{
	char str[] = "hello.hi.hi";
	char c='.';
	ft_split(str,c);
}


