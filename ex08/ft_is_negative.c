#include <unistd.h>

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-889);
	ft_is_negative(6565);

	return (0);
}
