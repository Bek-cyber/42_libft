/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:58:00 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/07 15:13:27 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t s;
	size_t i;

	i = 0;
	s = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[s] && (i + s + 1) < dstsize)
	{
		dst[i + s] = src[s];
		s++;
	}
	if (i < dstsize)
		dst[i + s] = '\0';
	return (ft_strlen(src) + i);
}
