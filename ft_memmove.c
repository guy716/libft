/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 02:04:16 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 22:40:09 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		d = (unsigned char *)dst + len - 1;
		s = (unsigned char *)src + len - 1;
		while (d >= (unsigned char *)dst)
			*d-- = *s--;
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
