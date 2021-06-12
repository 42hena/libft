/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hena <hena@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:33:30 by hena              #+#    #+#             */
/*   Updated: 2021/06/12 17:34:39 by hena             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*strdup(const char *s1)
{
	size_t	cnt;
	char	*p;

	cnt = ft_strlen(s1);
	p = (char *)ft_calloc(sizeof(char) * cnt + 1);
	i = 0;
	while (i < cnt)
	{
		p[i] = s[i];
		i++;
	}
}
