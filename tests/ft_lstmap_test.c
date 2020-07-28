#include "bonus.h"
#include <stdio.h>
#include <string.h>

//gcc -o lstmap -I ../includes ../src/ft_lst*.c ft_lstmap_test.c

static void *remove_first_letter(void *hello)
{
	return (hello + 1);
}

static void del_fake(void *temp)
{
}

int main(int argc, char *argv[])
{
	// Test remove_first_letter by compiling and typing ./lstmap hello
	//printf("Did the first letter get removed?\n[%s]", argv[1]);
	//printf("->[%s]\n\n", remove_first_letter(argv[1]));
	printf("Did the first letter get removed?\n[hello]");
	printf("->[%s]\n\n", remove_first_letter("hello"));
	
	// actual test for lstmap
	t_list *lst;
	t_list *st;

	lst = ft_lstnew(strdup("hello"));
	lst->next = ft_lstnew(strdup("young"));
	lst->next->next = ft_lstnew(strdup("padawan"));

	printf("The original content of lst:");
	printf("\n%s", lst->content);
	printf(" [%p|%p]", &lst, &lst->next);
	printf("\n%s", lst->next->content);
	printf(" [%p|%p]", &(lst->next), &lst->next->next);
	printf("\n%s", lst->next->next->content);
	printf(" [%p|%p]", &(lst->next->next), &lst->next->next->next);
	printf("\n\n");

	// the mapped version of lst
	st = ft_lstmap(lst, &remove_first_letter, ((void *)0));

	printf("With the first letters removed:");
	printf("\n%s", st->content);
	printf(" [%p|%p]", &st, &st->next);
	printf("\n%s", st->next->content);
	printf(" [%p|%p]", &(st->next), &st->next->next);
	printf("\n%s", st->next->next->content);
	printf(" [%p|%p]", &(st->next->next), &st->next->next->next);
	return (0);
}
