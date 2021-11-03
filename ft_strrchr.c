/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:39:36 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/07 16:38:06 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	sym;
	char	*st;

	sym = (char)c;
	len = ft_strlen(s);
	st = (char *)s;
	if (sym == '\0')
		return (st + len);
	while (len--)
		if (*(st + len) == sym)
			return (st + len);
	return (NULL);
}
