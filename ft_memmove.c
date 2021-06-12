/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:54:28 by hena              #+#    #+#             */
/*   Updated: 2021/06/12 16:56:43 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t i;

	if (src < dst)
	{
		i = len - 1;
		while (i >= 0)
		{
			*(dst + i) = *(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(dst + i) = *(src + i);
			i++;
		}
	}
}
