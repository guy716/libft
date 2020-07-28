/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:44:20 by gil               #+#    #+#             */
/*   Updated: 2020/06/30 04:25:10 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bonus.h>

t_list		*ft_lstnew(void *content)
{
	t_list *element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->content = content;
	element->next = NULL;
	return (element);
}
