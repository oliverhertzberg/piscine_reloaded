#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a, b;
	int *aptr;
	int *bptr;

	a = 5;
	b = 42;
	aptr = &a;
	bptr = &b;
	printf("a = %d, b = %d \n", a, b);
	ft_swap(aptr, bptr);
	printf("a = %d, b = %d \n", a, b);
}
