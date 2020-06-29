#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	if (haystack[i] == '\0')
		return ((void *)0);
	while (haystack[i] == needle[i] && haystack[i] && i < len)
		i++;
	if (needle[i] == '\0')
		return ((char *)haystack);	
	else
		return (ft_strnstr(haystack + 1, needle, len - 1));
}
