#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int main(void)
{
	rush(5,3);
	ft_putchar('\n');
	rush(5,1);
	ft_putchar('\n');
	rush(1,1);
	ft_putchar('\n');
	rush(1,5);
	ft_putchar('\n');
	rush(4,4);
	return (0);
}
