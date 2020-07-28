#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(int argc, char **argv){
	ft_putchar_fd(*argv[1], 1);
}
