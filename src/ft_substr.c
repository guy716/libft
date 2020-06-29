#include <stdlib.h>
#include <stdio.h>
#include <libft.h>
// can just add start to len then compare

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*subptr;

	if (!s)
		return (0);
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	subptr = sub;
	while (*s && (subptr - sub) < (long)len)
		*subptr++ = *(s++ + start);
	*subptr = '\0';
	return (sub);
}
