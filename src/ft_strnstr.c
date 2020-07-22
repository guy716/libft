/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:56:08 by gil               #+#    #+#             */
/*   Updated: 2020/06/30 01:56:09 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	if (haystack[i] == '\0')
		return ((void *)0);
	while (haystack[i] == needle[i] && haystack[i] && i < len)
		i++;
	if (needle[i] == '\0')
		return ((char *)haystack);
	else
		return (ft_strnstr(haystack + 1, needle, len - 1));
}
