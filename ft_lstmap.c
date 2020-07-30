/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/07/31 05:58:00 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** I didn't really understand the instructions,...
** so your new list should look like:
** f(x)->f(x->next)->f(x->next->next)...?
** why would you delete elements?
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *curr;

	if (!f || !lst)
		return (NULL);
	curr = ft_lstnew((*f)(lst->content));
	if (!curr)
		return (NULL);
	head = curr;
	while (lst->next)
	{
		lst = lst->next;
		curr->next = ft_lstnew((*f)(lst->content));
		curr = curr->next;
		if (!curr)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
	}
	return (head);
}
