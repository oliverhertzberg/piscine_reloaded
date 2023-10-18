#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort(int num, char **s)
{
	int	i;
	int	j;
	char	*temp;

	i = 1;
	while (i < num)
	{
		j = i;
		while (j > 0 && ft_strcmp(s[j-1], s[j]) > 0)
		{
			temp = s[j-1];
			s[j-1] = s[j];
			s[j] = temp;
			j--;
		}
	i++;
	}
}

int	main(int argc, char **argv)
{
	int	i, j;
	i = 0;
	j = 1;
	
	ft_sort(argc - 1, argv + 1);
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
