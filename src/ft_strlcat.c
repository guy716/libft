#include "libft.h"
// check if there are better ways of handling the different numerical datatypes

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char *d;
	char *s;
	long dstlen;

	dstlen = (long)ft_strlen(dst);
	d = dst + dstlen;
	s = (char *)src;
	if ((long)dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	while (*s && d < (dst + dstsize - 1))
	{
		*d = *s;
		d++;
		s++;
	}
	if (dstsize && (long)dstsize > dstlen)
		*d = '\0';
	return (dstlen + ft_strlen(src));
}
