/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:43:56 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/06 19:41:07 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*str;
	const	char	*st;
	char			q;

	str = (char *)dst;
	st = (char *)src;
	q = (char)c;
	while (n--)
	{
		*str++ = *st++;
		if (*(str - 1) == q)
			return (str);
	}
	return (NULL);
}
