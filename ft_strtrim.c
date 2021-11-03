/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:36:13 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/14 17:18:48 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_test(char const *set, char s)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*mas;

	if (!s1)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_test(set, s1[i]))
		i++;
	while (i < len && ft_test(set, s1[len - 1]))
		len--;
	if (!(mas = (char *)malloc(sizeof(*s1) * (len - i + 1))))
		return (NULL);
	while (i < len)
		mas[j++] = s1[i++];
	mas[j] = '\0';
	return (mas);
}
