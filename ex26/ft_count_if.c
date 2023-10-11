#include <stdio.h>

int ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int sum;
	i = 0;
	sum = 0;
	while (tab[i] != NULL)
	{
		if(tab[i][0] == '1')
		{
			sum += (f)(tab[i]);
		}
	i++;	
	}
	return (sum);
}

int	char_to_int(char *str)
{
	int n = 0;
	n = str[0] - '0';
	return (n);
}

int	main(void)
{
	char *arr[] = {"1", "5", "6", "7", "2", "1", NULL};
	printf("%d", ft_count_if(arr, char_to_int));
	return (0);
}
