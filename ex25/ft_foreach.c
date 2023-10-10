#include <unistd.h>

void	ft_putnbr(int num)
{
	char c;
	c = num + '0';
	write(1, &c, 1);
}

void ft_foreach(int *tab, int length, void (*f)(int))
{	
	int i;
	i = 0;
	while (i < length)
	{
		(*f)(tab[i++]);
	}	
}

int	main(void)
{
	int tab[] = {2, 5 , 6, 8};
	ft_foreach(tab, 4, &ft_putnbr);

	return (0);
}
