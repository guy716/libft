/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:44:20 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 18:20:38 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *element;

	element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->content = content;
	element->next = NULL;
	return (element);
}
