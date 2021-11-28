#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x;
	int	y;

	x = 16;
	y = 5;
	printf("prev\nx: %d\ny: %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("latter\nx: %d\ny: %d\n", x, y);
	return (0);
}
