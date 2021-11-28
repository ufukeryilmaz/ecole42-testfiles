#include <stdio.h>

void	ft_ft(int *x);

int	main(void)
{
	int	z;
	z = 19283;
	ft_ft(&z);
	printf("%d\n", z);
	z = -83;
	ft_ft(&z);
	printf("%d\n", z);
	z = 0;
	ft_ft(&z);
	printf("%d\n", z);
	
	return (0);
}
