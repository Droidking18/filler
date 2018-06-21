/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaplan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 15:41:55 by dkaplan           #+#    #+#             */
/*   Updated: 2018/06/12 10:08:14 by dkaplan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *prev;

	if (!lst)
		return (NULL);
	new = f(lst);
	prev = new;
	lst = lst->next;
	while (lst)
	{
		prev->next = f(lst);
		lst = lst->next;
		prev = prev->next;
	}
	return (new);
}
