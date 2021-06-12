/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:52:25 by hena              #+#    #+#             */
/*   Updated: 2021/06/12 14:23:07 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;
	size_t	i;

	i = 0;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if(!p)
		return (NULL);
	for (i = 0 ; i < len ; i++)
	{
		p[i] = s[start+i];
	}
	return (p);
}
