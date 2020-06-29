#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char *p;

	p = s;
	while (p != (char *)s + n)
	{
		*p = 0;
		p++;
	}
}
