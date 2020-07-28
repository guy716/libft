/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 02:06:37 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 02:45:30 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split0(char const *s, char c)
{
	char	**arr;
	char	*tmp;
	int		ix_c;

	tmp = (char *)s;
	arr = malloc(2 * sizeof(char *));
	if (!arr)
		return (0);
	while (*tmp && *tmp != c)
		tmp++;
	ix_c = tmp - s;
	arr[0] = malloc(ix_c + 1);
	arr[1] = malloc(ft_strlen(s) - ix_c);
	if (!arr[0] || !arr[1])
		return (0);
	ft_strlcpy(arr[0], s, ix_c);
	*(arr[0] + ix_c) = '\0';
	while (s[ix_c])
	{
		*arr[1]++ = s[ix_c++];
	}
	return (arr);
}
