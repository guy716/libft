/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/07/24 01:17:39 by gil              ###   ########.fr       */
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
	t_list **head;
	t_list *curr;

	if (!del || !f || !lst)
		return (NULL);
	curr = ft_lstnew(f(lst->content));
	head = &curr; 
	while (lst->next && curr)
	{
		lst = lst->next;
		curr->next = ft_lstnew(lst->content);
		curr = curr->next;
	}
	return (*head);
}
/*
void ft_putstr(void *c)
{
	char *s = c;

	ft_putstr_fd(s, 1);
}

void *idk(void *c)
{
	return ("AYT");
}

int main(void)
{
	t_list *a;
	t_list *b;

	a = ft_lstnew("-8");
	a->next = ft_lstnew("100");
	a->next->next = ft_lstnew("42");
	ft_lstiter(a, &ft_putstr);
	ft_lstiter(ft_lstmap(a, &idk, &ft_putstr), &ft_putstr); //ok it's supposed to be a delete function but it matches the i/o reqts *shrug*
}*/
