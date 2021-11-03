/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:33:31 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/06 18:56:28 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char q;

	q = (unsigned char)c;
	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == q)
			return (str);
		str++;
	}
	return (NULL);
}
