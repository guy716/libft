/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:51:57 by gil               #+#    #+#             */
/*   Updated: 2020/07/30 13:10:14 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tokens(char const *s, char separator)
{
	int tokens;

	tokens = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		while (*s && *s == separator)
			s++;
		if (*s && *s != separator)
		{
			tokens++;
			while (*s && *s != separator)
				s++;
		}
	}
	return (tokens);
}

char		**ft_split(char const *ptr_s, char sep)
{
	char	**arr;
	int		ix;
	int		nth_token;
	int		tokens;

	tokens = count_tokens(ptr_s, sep);
	nth_token = 0;
	if (!ptr_s || !(arr = malloc((tokens+1) * sizeof(char *))))
		return (0);
	while (nth_token < tokens)
	{
		while (*ptr_s && *ptr_s == sep)
			ptr_s++;
		ix = 0;
		while (ptr_s[ix] && ptr_s[ix] != sep)
			ix++;
		if (!(arr[nth_token] = malloc(ix + 1)))
			return (0);
		ft_memccpy(arr[nth_token], ptr_s, (int)sep, ix);
		ptr_s = ptr_s + ix;
		arr[nth_token][ix] = '\0';
		nth_token++;
	}
	return (arr);
}
