/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:43:33 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 02:50:16 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

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
