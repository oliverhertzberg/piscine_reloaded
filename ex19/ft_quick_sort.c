#include <stdio.h>

void	swap(char *arr[], int i, int j)
{
	char *temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);	
}

int	partition(char **arr, int low, int high)
{
	int i;
	int j;

	i = low;
	j = low;
	while (j < high)
	{
		if((ft_strcmp(arr[j], arr[high])) < 0)
		{
			swap(arr, i, j);
			i++;
		}
		j++;
	}
	swap(arr, i, high);
	return (i);
}

void	quicksort(char **arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr,  low, high);

		quicksort(arr, pi + 1, high);
		quicksort(arr, low, pi - 1);
	}
}

int	main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc <= 1)
		return (0);
	quicksort(argv + 1, 0, argc);
	while (i < argc - 1)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
