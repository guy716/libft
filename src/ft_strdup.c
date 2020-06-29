#include "libft.h"
#include <stdlib.h>
#include <errno.h>

char * ft_strdup(const char *s1)
{
	char	*str;
	char	*s;	

	str = malloc(ft_strlen(s1) + 1);
	s = str;
	if (!str)
	{
		errno = ENOMEM;
		return (0);
	}
	while (*s1)
		*s++ = *s1++;
	*s = '\0';
	return (str);
}
