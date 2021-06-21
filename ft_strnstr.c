/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:12:54 by hena              #+#    #+#             */
/*   Updated: 2021/06/21 17:27:38 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *neddle, size_t len)
{
	size_t i;
	size_t j;

	if (*neddle == 0)
		return ((char*)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == neddle[j] && i + j < len)
		{
			j++;
			if (neddle[j] == 0)
				return ((char *)haystack + i);;
		}
		i++;
	}
	return (NULL);
}
