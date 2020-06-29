#include <stdio.h>

void * ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char * d;
	const unsigned char * s;

	d = dst;
	s = src;
	while (d < ((const unsigned char *)dst + n))
	{
		*d = *s;
		++d;
		if (*s == (unsigned char)c)
		{
			return d;
		}
		++s;
	}
	return NULL;
}

