#include <stdio.h>

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char * d;
	const unsigned char * s;

	d = dst;
	s = src;
	while ((d != NULL || s!= NULL) && d < ((const unsigned char *)dst + n))
	{
		*d = *(unsigned char *)s;
		d++;
		s++;
	}
	if (dst != NULL)
	{
		return dst;
	}
	return 0;
}
