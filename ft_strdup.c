/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:41:26 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 16:52:20 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	s = (char *)malloc(sizeof(*s) * (i + 1));
	if (!s)
		return (NULL);
	while (j < i)
	{
		s[j] = s1[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
