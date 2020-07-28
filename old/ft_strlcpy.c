/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guy <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 00:30:40 by guy               #+#    #+#             */
/*   Updated: 2018/09/14 05:37:22 by guy              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Check: do you need to null the remaining bytes?
*/

static unsigned int	str_len(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	j;

	j = 0;
	size--;
	while (src[j] && (j < size))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (str_len(src));
}
