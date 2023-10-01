#include <stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int num;
	int *numptr;

	num = 0;
	numptr = &num;
	
	printf("num before: %d \n", num);

	ft_ft(numptr);

	printf("num after: %d \n", num);

	return (0);
}
