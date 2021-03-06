/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:04:26 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 15:40:25 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	temp;

	if (src == 0)
		return (0);
	i = 0;
	temp = ft_strlen(src);
	while (i + 1 < dstsize && i < temp)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = 0;
	return (temp);
}
