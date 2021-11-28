#include <stdio.h>

void 	ft_swap(int *x,int *y);

int	main(void)
{
	int	a;
	int	b;
	
	a = 456;
	b = 654;
	printf("prev\na: %d\nb: %d\n", a, b);
	ft_swap(&a, &b);
	printf("latter\na: %d\nb: %d\n", a, b);	
	return (0);
}
