#include <libft.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *c;

	if (!s1 || !s2)
		return (0);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (0);
	c = str;
	while (*s1)
		*c++ = *s1++;
	while (*s2)
		*c++ = *s2++;
	*c = '\0';
	return (str);
}
