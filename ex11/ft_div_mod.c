#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int a, b;
	int *div = malloc(sizeof(int));
	int *mod = malloc(sizeof(int));

	a = 50;
	b = 10;
	ft_div_mod(a, b, div, mod);
	printf("div = %d, mod = %d \n", *div, *mod);
	return (0);
}
