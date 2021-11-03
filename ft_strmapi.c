/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:46:06 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 17:33:45 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mas;

	if (!s)
		return (NULL);
	i = 0;
	mas = malloc(ft_strlen(s) + 1);
	if (!mas)
		return (NULL);
	while (s[i])
	{
		mas[i] = f(i, s[i]);
		i++;
	}
	mas[i] = '\0';
	return (mas);
}
