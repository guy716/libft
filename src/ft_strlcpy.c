#include <stdio.h>
#include <libft.h>

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	int i;

	i = 0;
	if (!dst || !src)
		return 0;
	while (src[i] && i < ((int)dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
