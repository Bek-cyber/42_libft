/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:02:03 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 18:04:41 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*mas;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(mas = malloc(i)))
		return (NULL);
	i = 0;
	j = 0;
	if ((char)s1[i] == '\0' && (char)s2[i] == '\0')
		return (mas);
	while (s1[i])
	{
		mas[i] = (char)s1[i];
		i++;
	}
	while (s2[j])
	{
		mas[i + j] = (char)s2[j];
		j++;
	}
	mas[i + j] = '\0';
	return (mas);
}
