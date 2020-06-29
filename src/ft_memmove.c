#include <stdio.h>

void * ft_memmove(void * dst, const void * src, size_t len)
{
	unsigned char * d;
	const unsigned char * s;

	d = dst;
	s = src;
	if (d > s && (d - s) < (long) len)
	{
		d = dst + len;
		s = src + len;

		while ((d != NULL || s!= NULL) && d >= (const unsigned char *)dst)
		{
			*d = *(unsigned char *)s;
			d--;
			s--;
		}
		return dst;
	}
	while ((d != NULL || s!= NULL) && d < ((const unsigned char *)dst + len))
	{
		*d = *(unsigned char *)s;
		d++;
		s++;
	}
	return dst;
}
