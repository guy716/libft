/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:58:37 by gil               #+#    #+#             */
/*   Updated: 2020/07/31 04:32:34 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*subptr;

	if (!s)
		return (0);
	if ((ft_strlen(s) - start) <= 0)
		return (NULL);
	if (ft_strlen(s) < (int)len)
		len = ft_strlen(s);
	if (!(sub = malloc(len + 1)))
		return (0);
	subptr = sub;
	while (*s && (subptr - sub) < (long)len)
		*subptr++ = *(s++ + start);
	*subptr = '\0';
	return (sub);
}
