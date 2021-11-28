#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	array_int[5] = {1, 2, 3, 4, 5};
	int	size;
	int	index;

	size = 5;
	index = 0;
	ft_rev_int_tab(array_int, size);
	while (index < size)
	{
		printf("%d ", array_int[index++]);
	}
	printf("\n");
	return (0);
}
