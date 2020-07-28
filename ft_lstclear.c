/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/07/22 21:43:33 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!del)
		return ;
	if ((*lst)->next)
		ft_lstclear(&((*lst)->next), del);
	if (*lst)
	{
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
