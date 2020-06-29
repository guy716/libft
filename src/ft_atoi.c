#include "libft.h"

int		ft_atoi(char *str)
{
	int i;
	long value;
	int negative;

	i = 0;
	value = 0;
	negative = 0;
	while ((str[i] == ' ') || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		value = value * 10 + (str[i] - '0');
		if (value < 0)
		{
			if (negative)
				return (0);
			return (-1);
		}
		i++;
	}
	if (negative)
		value *= -1;
	return (value);
}

