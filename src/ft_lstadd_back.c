#include <bonus.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{	
		*lst = new;
		return ;
	}
	while ((*lst)->next)
		*lst = (*lst)->next;	
	(*lst)->next = new;
}
