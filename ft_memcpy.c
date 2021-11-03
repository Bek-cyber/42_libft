/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:29:50 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/08 20:43:20 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *str;
	unsigned char *st;

	if (dst == NULL && src == NULL)
		return (NULL);
	str = (unsigned char *)dst;
	st = (unsigned char *)src;
	while (n--)
		*str++ = *st++;
	return (dst);
}
