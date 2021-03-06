/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:38:26 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 18:12:45 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_digits(int n)
{
	int				digits;
	unsigned int	num;

	digits = 0;
	num = n;
	if (num == 0)
		return (1);
	if (n < 0)
	{
		num = -1 * (unsigned int)n;
		digits++;
	}
	while (num > 0)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

char		*ft_itoa(int n)
{
	int				digits;
	char			*str;
	unsigned int	num;

	num = (unsigned int)n;
	digits = num_digits(n);
	str = (char *)malloc(digits + 1);
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		num = -(unsigned int)n;
		str[0] = '-';
	}
	str[digits] = '\0';
	while (num > 0)
	{
		str[--digits] = (char)(num % 10) + '0';
		num /= 10;
	}
	return (str);
}
