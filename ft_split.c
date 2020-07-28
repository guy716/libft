/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:51:57 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 02:43:58 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** check behavior when c = '\0'
** counts the number of occurrences of c in s
*/

static int	countsplits(char const *s, char c)
{
	int count;

	count = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			count++;
		}
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	char	*ptr_s;
	int		next_c;
	int		nth_split;
	int		splits;

	ptr_s = (char *)s;
	nth_split = 0;
	splits = countsplits(s, c);
	if (!s || !(arr = malloc(splits * sizeof(char *))))
		return (0);
	while (nth_split < splits)
	{
		while (*ptr_s && *ptr_s == c)
			ptr_s++;
		next_c = 0;
		while (ptr_s[next_c] && ptr_s[next_c] != c)
			next_c++;
		if (!(arr[nth_split] = malloc(next_c + 1)))
			return (0);
		ft_memccpy(arr[nth_split], ptr_s, (int)c, next_c);
		ptr_s = ptr_s + next_c;
		arr[nth_split++][next_c] = '\0';
	}
	return (arr);
}
