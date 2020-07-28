#include <libft.h>
#include <string.h>
#include <stdio.h>

void check_diff(char *d1, char *d2,  char *s, int n){
	printf("[%s %s %d] \n", d1, s, n);

	memcpy(d1, s, n);
	printf("%s (length: %lu)\n", d1, strlen(d1));
	ft_memcpy(d2, s, n);
//	int diff = strcmp(memcpy(d1, s, n), ft_memcpy(d2, s, n));
//	printf("diff: %d\n", diff);
	printf("%s (length: %lu)\n", d2, strlen(d2));
	printf("------\n");
}

void test_basic(){
    char d1[20] = "kumusta";
	char d2[20] = "kumusta";
	char *src = "aaaaa";
	int  len = 5;

	check_diff(d1, d2, src, len);
}

void test_overflow(){
    char d1[20] = "safadf";
	char d2[20] = "safadf";
	char *src = "aaaaa";
	int  len = 30;
	check_diff(d1, d2, src, len);
}

void test_both_null_with_size(){
   // char d1[20] = "\0";
//	char d2[20] = "\0";
	char *src = "\0";
	int  len = 5;
	check_diff(((void *)0), ((void *)0), src, len);
}

int main(void){
	printf("----\n");
	test_basic();
//	test_overflow();
	test_both_null_with_size();
}
