/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/07/22 18:52:21 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		printf("\n---\n%s\n", (*lst)->content);
		tmp = (*lst)->next;
		printf("%s\n", tmp->content);
		del(*lst);
		free(*lst);
		lst = &tmp;
	}
	//printf("rrr");
}
