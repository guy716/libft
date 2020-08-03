/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 18:57:27 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
