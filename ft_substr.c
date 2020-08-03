/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:58:37 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 18:38:10 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;
	char	*subptr;

	if (!s)
		return (NULL);
	slen = (size_t)ft_strlen(s);
	if (slen <= (size_t)start)
		start = slen;
	s = s + start;
	slen = (size_t)ft_strlen(s);
	if (len > slen)
		len = slen;
	if (!(sub = (char *)malloc(len + 1)))
		return (NULL);
	subptr = sub;
	while (*s && (subptr - sub) < (long)len)
		*subptr++ = *s++;
	*subptr = '\0';
	return (sub);
}
