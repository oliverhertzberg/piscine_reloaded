#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i, j;
	i = 0;
	j = 1;

	if (argc > 1)
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
		ft_putchar('\n');
		j++;
		}
	return (0);
}
