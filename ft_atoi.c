/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:42:57 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/09 18:09:46 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	unsigned long	num;
	int				i;
	int				f;

	i = 0;
	f = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\r' ||
			str[i] == '\f' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			f = -f;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > LONG_MAX && f == 1)
			return (-1);
		if (num > LONG_MAX && f == -1)
			return (0);
		num = num * 10 + (str[i++] - '0');
	}
	return (num * f);
}
