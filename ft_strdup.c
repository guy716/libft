/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:53:11 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 02:48:25 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*s;

	str = malloc(ft_strlen(s1) + 1);
	s = str;
	if (!str)
	{
		errno = ENOMEM;
		return (0);
	}
	while (*s1)
		*s++ = *s1++;
	*s = '\0';
	return (str);
}
