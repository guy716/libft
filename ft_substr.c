/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:58:37 by gil               #+#    #+#             */
/*   Updated: 2020/07/31 22:46:02 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*subptr;

	if (!s)
		return (NULL);
	if ((long)ft_strlen(s) <= (long)start)
		return (NULL);
	if (ft_strlen(s) < (int)len)
		len = ft_strlen(s);
	if (!(sub = malloc(len + 1)))
		return (NULL);
	subptr = sub;
	while (*s && (subptr - sub) < (long)len)
		*subptr++ = *(s++ + start);
	*subptr = '\0';
	return (sub);
}
