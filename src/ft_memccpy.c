/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 02:09:06 by gil               #+#    #+#             */
/*   Updated: 2020/06/30 02:09:14 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	while (d < ((const unsigned char *)dst + n))
	{
		*d = *s;
		++d;
		if (*s == (unsigned char)c)
		{
			return (d);
		}
		++s;
	}
	return (NULL);
}
