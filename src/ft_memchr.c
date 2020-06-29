#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char *ptr;
	
	ptr = (char *)s;
	while (ptr != s + n)
	{
		if (*ptr == (char)c)
			return (ptr); 
		ptr++;
	}
	return 0;
}
