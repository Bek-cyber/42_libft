/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:52:47 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 15:13:18 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*st;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	str = (unsigned char *)s1;
	st = (unsigned char *)s2;
	while (i < n)
	{
		if (str[i] != st[i])
			return (str[i] - st[i]);
		i++;
	}
	return (0);
}
