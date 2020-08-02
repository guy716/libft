/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:51:57 by gil               #+#    #+#             */
/*   Updated: 2020/08/02 17:41:26 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_tokens(char const *s, char separator)
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

static size_t	get_token_length(char const *s, char sep)
{
	size_t	tok_len;

	tok_len = 0;
	while (s[tok_len] && s[tok_len] != sep)
		tok_len++;
	return (tok_len);
}

char			**ft_split(char const *ptr_s, char sep)
{
	char	**tokens;
	int		nth_token;
	int		num_tokens;
	size_t	tok_len;

	num_tokens = count_tokens(ptr_s, sep);
	nth_token = 0;
	if (!(tokens = malloc((num_tokens + 1) * sizeof(char *))))
		return (NULL);
	tokens[num_tokens] = NULL;
	while (nth_token < num_tokens)
	{
		while (*ptr_s && *ptr_s == sep)
			ptr_s++;
		tok_len = get_token_length(ptr_s, sep);
		if (!(tokens[nth_token] = malloc(tok_len + 1)))
		{
			free(tokens);
			return (NULL);
		}
		ft_strlcpy(tokens[nth_token++], ptr_s, tok_len + 1);
		ptr_s = ptr_s + tok_len;
	}
	return (tokens);
}
