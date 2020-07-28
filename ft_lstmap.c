/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 01:30:43 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus.h>

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

	if (!del)
		del = NULL;
	if (!f || !lst)
		return (NULL);
	curr = ft_lstnew((*f)(lst->content));
	if (!curr)
		return (NULL);
	head = curr;
	while (lst->next && curr)
	{
		lst = lst->next;
		curr->next = ft_lstnew((*f)(lst->content));
		curr = curr->next;
	}
	return (head);
}
