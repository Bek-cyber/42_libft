/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:06:43 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/08 20:44:59 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str;
	const char	*st;

	if (dst == NULL && src == NULL)
		return (NULL);
	str = (char *)dst;
	st = (const char *)src;
	if (st > str)
		while (len--)
			*str++ = *st++;
	else
	{
		str = str + (len - 1);
		st = st + (len - 1);
		while (len--)
			*str-- = *st--;
	}
	return (dst);
}
