/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:53:56 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 19:27:24 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char *d;
	char *s;
	long dstlen;

	dstlen = (long)ft_strlen(dst);
	d = dst + dstlen;
	s = (char *)src;
	if ((long)dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (*s && d < (dst + dstsize - 1))
		*d++ = *s++;
	if (dstsize && (long)dstsize > dstlen)
		*d = '\0';
	return (dstlen + ft_strlen(src));
}
