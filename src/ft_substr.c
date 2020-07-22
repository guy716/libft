/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:58:37 by gil               #+#    #+#             */
/*   Updated: 2020/06/30 01:58:38 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*subptr;

	if (!s)
		return (0);
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	subptr = sub;
	while (*s && (subptr - sub) < (long)len)
		*subptr++ = *(s++ + start);
	*subptr = '\0';
	return (sub);
}
