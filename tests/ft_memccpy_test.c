#include "../includes/libft.h"
#include <string.h>

int main(void){
	char editable[20] = "the cake is a lie";
	ft_memccpy(editable, "Test basic asf", ' ', 10);
	printf("|%s|\n", editable); 

	char editable2[22];
	char * rval = ft_memccpy(editable2, "test basic du memccpy !", 'm', 22);
	printf("|%s|\n", rval);
	return 0;
}
