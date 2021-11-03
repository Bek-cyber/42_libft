/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:24:29 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/06 20:34:17 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	c;
	void	*mas;

	c = size * count;
	mas = malloc(c);
	if (mas != NULL)
	{
		ft_bzero(mas, c);
		return (mas);
	}
	return (NULL);
}
