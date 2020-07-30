/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:51:57 by gil               #+#    #+#             */
/*   Updated: 2020/07/30 15:47:20 by gil              ###   ########.fr       */
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
			tokens++;
		while (*s && *s != separator)
			s++;
	}
	return (tokens);
}

char		**ft_split(char const *ptr_s, char sep)
{
	char	**tokens;
	int		tok_len;
	int		nth_token;
	int		num_tokens;

	num_tokens = count_tokens(ptr_s, sep);
	nth_token = 0;
	if (!(tokens = malloc((num_tokens + 1) * sizeof(char *))))
		return (NULL);
	tokens[num_tokens] = NULL;
	while (nth_token < num_tokens)
	{
		tok_len = 0;
		while (*ptr_s && *ptr_s == sep)
			ptr_s++;
		while (ptr_s[tok_len] && ptr_s[tok_len] != sep)
			tok_len++;
		if (!(tokens[nth_token] = malloc(tok_len + 2)))
			return (NULL);
		ft_strlcpy(tokens[nth_token], ptr_s, tok_len + 1);
		ptr_s = ptr_s + tok_len;
		nth_token++;
	}
	return (tokens);
}
