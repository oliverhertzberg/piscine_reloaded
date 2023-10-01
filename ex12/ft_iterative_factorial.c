#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	
	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 1)
	{
		factorial *= nb--;		
	}
	return (factorial);
}

int	main(void)
{
	printf("%d \n", ft_iterative_factorial(12));
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(-4));
	return (0);
}
