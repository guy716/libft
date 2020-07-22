/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/07/22 22:27:05 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus.h>
#include <stdio.h>

/*
** I didn't really understand the instructions,...
** so your new list should look like:
** f(x)->f(x->next)->f(x->next->next)...?
** why would you delete elements?
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;

	if (!del || !f || !lst)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (head)
		head->next = ft_lstmap(head->next, f, del);
	return (head);
}
