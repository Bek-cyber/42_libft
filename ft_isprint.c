/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:42:16 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/05 16:23:41 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int s)
{
	int i;
	int j;

	i = 32;
	j = 126;
	if (s >= i && s <= j)
		return (1);
	return (0);
}
