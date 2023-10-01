#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	while(str[len])
		len++;
	
	return (len);
}

int	main(void)
{
	printf("%d \n", ft_strlen("Dog"));
	printf("%d \n", ft_strlen("Dog and Dog"));
	printf("%d \n", ft_strlen(" Dog"));
	printf("%d \n", ft_strlen(" Dog "));

	return (0);
}
