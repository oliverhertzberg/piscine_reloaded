#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

int	main(void)
{
	printf("%d \n", ft_recursive_factorial(12));
	printf("%d \n", ft_recursive_factorial(0));
	printf("%d \n", ft_recursive_factorial(-42));
	return (0);
}
