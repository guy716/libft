/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:58:04 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 02:45:11 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && *(s1 + len - 1) && ft_strchr(set, *(s1 + len - 1)))
		len--;
	str = malloc(len + 1);
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	*(str + len) = '\0';
	return (str);
}
