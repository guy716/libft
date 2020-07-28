#include <stdio.h>
#include <ctype.h>
#include "../includes/libft.h"

int main(void){
	for (int i = 0; i < 530; i++){
		if(ft_isprint(i) != isprint(i)){
			printf("[%d]%c\t%d | %d\n", 
					i,
					(char)i,
					ft_isprint(i),
					isprint(i));
		}
	}
}
