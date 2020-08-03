/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 02:04:16 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 16:53:03 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (d > s && (d - s) < (long)len)
	{
		d = dst + len - 1;
		s = src + len - 1;
		while ((d != NULL || s != NULL) && d >= (const unsigned char *)dst)
			*d-- = *(unsigned char *)s--;
		return (dst);
	}
	while ((d != NULL || s != NULL) && d < ((const unsigned char *)dst + len))
		*d++ = *(unsigned char *)s++;
	return (dst);
}
