#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	testnum;

	testnum = 1;
	while (testnum <= nb)
	{
		if (testnum * testnum == nb)
			return (testnum);
		testnum++;
	}
	return (0);
}

int	main(void)
{
	printf("%d \n", ft_sqrt(1));
	printf("%d \n", ft_sqrt(144));
	printf("%d \n", ft_sqrt(2));
	printf("%d \n", ft_sqrt(-42));
	printf("%d \n", ft_sqrt(0));
	return (0);
}
