#include <bonus.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		printf("\n---\n%s\n", (*lst)->data);
		tmp = (*lst)->next;
		printf("%s\n", tmp->data);
		del(*lst);
		free(*lst);
		*lst = tmp;
	}	
}
