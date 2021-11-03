/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:07:57 by ubolt             #+#    #+#             */
/*   Updated: 2020/11/11 13:43:25 by ubolt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l1;

	l1 = NULL;
	if (lst)
	{
		l1 = ft_lstnew(f(lst->content));
		lst = lst->next;
		while (lst)
		{
			if (!(ft_lstnew(f(lst->content))))
			{
				ft_lstclear(&l1, del);
				return (NULL);
			}
			ft_lstadd_back(&l1, ft_lstnew(f(lst->content)));
			lst = lst->next;
		}
	}
	return (l1);
}
