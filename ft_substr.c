/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 17:29:51 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/14 17:01:42 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	int		i;
	char	*mas;

	if (!s)
		return (NULL);
	i = 0;
	mas = malloc(len + 1);
	if (!mas)
		return (NULL);
	if (len == 0)
		return (mas);
	if (start >= ft_strlen(s))
		return (mas);
	while (len--)
	{
		mas[i] = (char)s[start];
		start++;
		i++;
	}
	mas[i] = '\0';
	return (mas);
}
