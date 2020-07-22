/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:46:14 by gil               #+#    #+#             */
/*   Updated: 2020/06/30 02:04:12 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	while ((d != NULL || s != NULL) && d < ((const unsigned char *)dst + n))
	{
		*d = *(unsigned char *)s;
		d++;
		s++;
	}
	if (dst != NULL)
	{
		return (dst);
	}
	return (0);
}
