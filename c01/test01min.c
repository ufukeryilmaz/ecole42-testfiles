#include <stdio.h>
void ft_pseudo_ft(int ***z)
{
	***z = 42;
}

int	main(void)
{
	int a;
	int *b;
	int **c;
	int ***d;

	a = 65;
	b = &a;
	c = &b;
	d = &c;
	ft_pseudo_ft(d);
	printf("%d\n", a);
}
