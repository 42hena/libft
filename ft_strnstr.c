/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:12:54 by hena              #+#    #+#             */
/*   Updated: 2021/06/20 21:02:11 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (i + 1 < len && haystack[i])
	{
		if (haystack[i] == neddle[j])
		{
			while (neddle[j])
			{
				if (haystack[i] != neddle[j])
					break ;
				if (neddle[j] == 0)
					return ((char *)haystack + i);
				i++;
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
