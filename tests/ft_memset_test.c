#include "../includes/libft.h"
#include <string.h>
#include <stdio.h>

void check_diff(char *b2, char *b1, int c, int len){
	printf("[%s %c %d] ", b1, c, len);

	int diff = strcmp(memset(b1, c, len), ft_memset(b2, c, len));
	printf("diff: %d\n", diff);
	printf("%s (length: %lu)\n", b1, strlen(b1));
	printf("%s (length: %lu)\n", b2, strlen(b2));
	printf("------\n");
}

void test_basic(){
    char b1[20] = "kumusta";
	char b2[20] = "kumusta";
	char c = 'a';
	int  len = 5;

	check_diff(b1, b2, c, len);
}

void test_debug(){
    char b1[20] = "safadf";
	char b2[20] = "safadf";
	char c = 'a';
	int  len = 30;
	check_diff(b1, b2, c, len);
}


int main(void){
	test_basic();
	test_debug();
}
