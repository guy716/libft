/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:55:36 by gil               #+#    #+#             */
/*   Updated: 2020/07/29 02:45:57 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	char			*s_ptr;
	unsigned int	s_len;
	unsigned int	reps;

	if (!s || !f)
		return (0);
	s_ptr = (char *)s;
	s_len = ft_strlen(s);
	out = malloc(s_len + 1);
	if (!out)
		return (0);
	reps = 0;
	while (reps < s_len)
	{
		out[reps] = f(reps, *s_ptr);
		s_ptr++;
		reps++;
	}
	out[s_len] = '\0';
	return (out);
}
