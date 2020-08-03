/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:58:37 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 19:10:43 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ix;
	size_t	slen;
	char	*sub;

	ix = 0;
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
	while (*s && ix < len)
		sub[ix++] = *s++;
	sub[ix++] = '\0';
	return (sub);
}
