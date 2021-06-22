/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:05:36 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 15:41:42 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize < 0)
		return (0);
	if (dstsize <= dlen)
		return (dstsize + slen);
	i = 0;
	while (src[i] && dlen + i + 1 < dstsize)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = 0;
	return (dlen + ft_strlen(src));
}
