/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:31:10 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 17:58:17 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*st;

	i = 0;
	str = (unsigned char *)s1;
	st = (unsigned char *)s2;
	while (i < n)
	{
		if (str[i] != st[i])
			return (str[i] - st[i]);
		if (str[i] == '\0' || st[i] == '\0')
			return (str[i - 1] - st[i - 1]);
		i++;
	}
	return (0);
}
