#include <stdlib.h>
#include <libft.h>
#include <string.h>

/* check behavior when c = '\0' */

/* counts the number of occurrences of c in s
 */

static int countsplits(char const *s, char c)
{
	int count;
	count = 0;
	if (s)
		while (*s != '\0')
		{
			while (*s && *s == c)
				s++;
			if (*s && *s != c)
			{
				while (*s && *s != c)
					s++;
				count++;
			}
		}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char	**arr;
	char	*ptr_s;
	int		next_c;
	int		nth_split;
	int		splits;

	ptr_s = (char *)s;
	nth_split = 0;
	if (!s)
		return (0);
	splits = countsplits(s, c) ;
	arr = malloc(splits * sizeof(char *));
	if (!arr)
		return 0;
	while (nth_split < splits)
	{
		while (*ptr_s && *ptr_s == c)
			ptr_s++;
		next_c = 0;
		while (ptr_s[next_c] && ptr_s[next_c] != c)
			next_c++;
		arr[nth_split] = malloc(next_c + 1);
		if (!arr[nth_split])
			return (0);
		// initially wrote ptr_s = memccpy(...), but it was returning a null pointer. :(
		ft_memccpy(arr[nth_split], ptr_s, (int)c, next_c);
		ptr_s = ptr_s + next_c;
		arr[nth_split][next_c] = '\0';
		nth_split++;
	}
	return (arr);
}

