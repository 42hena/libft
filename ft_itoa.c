/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 20:52:29 by hena              #+#    #+#             */
/*   Updated: 2021/06/22 20:17:13 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_abs(long int n)
{
	return ((n >= 0) ? n : -n);
}

int		getcnt(int n)
{
	int		cnt;

	cnt = 0;
	cnt = ((n > 0) ? (1) : (2));
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		cnt;
	int		i;
	int		sign;

	sign = ((n < 0) ? (-1) : (1));
	cnt = getcnt(n);
	if (!(p = (char *)malloc(sizeof(char) * cnt)))
		return (0);
	i = 0;
	if (n < 0)
		p[0] = '-';
	p[--cnt] = 0;
	while (--cnt >= 0)
	{
		p[cnt] = ft_abs(n % 10) + '0';
		n = ft_abs(n / 10);
	}
	if (sign == -1)
		p[0] = '-';
	return (p);
}
