#include <bonus.h>

t_list		*ft_lstnew(void *data)
{
	t_list *element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->data = data;
	element->next = NULL;
	return (element);
}

