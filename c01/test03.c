#include <stdio.h>

void	ft_div_mod(int x, int y, int *rdiv, int *rmod);

int	main(void)
{
	int	a;
	int b;
	int div;
	int mod;

	a = 16;
	b = 5;
	ft_div_mod(16, 5, &div, &mod);
	printf("a: %d\nb: %d\nd: %d\nm: %d\n", a, b, div, mod);
}
