/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:14:47 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 16:10:49 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	if (!dst || !src)
		return (0);
	i = ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	if ((i + 1) < size)
		ft_memcpy(dst, src, (i + 1));
	else if (size != 0)
		ft_memcpy(dst, src, (size - 1));
	dst[size - 1] = '\0';
	return (i);
}
