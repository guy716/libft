#include <stdio.h>

int main() {
   /* my first program in C */
   printf("%i \n", (int)(-2147483648));
   printf("%i [div10]\n", (int)(-2147483648/10));
   printf("%i [mod10]\n", (int)(-2147483648%10));
   
   return 0;
}
