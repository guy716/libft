/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gil <guy@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 01:22:49 by gil               #+#    #+#             */
/*   Updated: 2020/08/03 18:01:05 by gil              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int		i;
	long	value;
	int		negative;

	i = 0;
	value = 0;
	negative = 0;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
		if (str[i++] == '-')
			negative = 1;
	while ((str[i] >= '0') && (str[i] <= '9'))
		value = value * 10 + (str[i++] - '0');
	if (negative)
		value *= -1;
	return ((int)value);
}
