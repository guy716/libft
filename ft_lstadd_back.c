/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:42:12 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 04:48:01 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else if (!(*lst)->next)
		(*lst)->next = new;
	else 
		ft_lstadd_back(&(*lst)->next, new);
}
