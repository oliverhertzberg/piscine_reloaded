#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = malloc((sizeof(int) * (max - min)));
	if (arr == NULL)
		return(NULL);
	while (min < max)
	{
		arr[i++] = min++;
	}
	return (arr);
}

int	main()
{
	int i;

	i = 0;
	while (i < 9)
	{
		printf("%d, ",(ft_range(1, 10)[i]));
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 15)
	{
		printf("%d, ",(ft_range(-5, 10)[i]));
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 17)
	{
		printf("%d, ",(ft_range(-22, -5)[i]));
		i++;
	}
	printf("\n");
	printf("%d", *(ft_range(8, 4)));
}
