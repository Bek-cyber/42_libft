/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:47:24 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 20:07:27 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(long int c)
{
	int i;

	i = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		i++;
		c = -c;
	}
	while (c > 0)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		s;
	long	num;
	char	*mas;

	num = n;
	s = ft_len(num);
	if (!(mas = (char *)malloc((sizeof(char) * s) + 1)))
		return (NULL);
	mas[s--] = '\0';
	if (num == 0)
	{
		mas[0] = '0';
		mas[1] = '\0';
	}
	if (num < 0)
	{
		mas[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		mas[s--] = (num % 10) + '0';
		num = num / 10;
	}
	return (mas);
}
