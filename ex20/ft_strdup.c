#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	len;
	char *dup;
	
	len = 0;
	while (src[len])
		len++;
	dup = malloc(len * 1 + 1);
	len = 0;
	while (src[len])
	{
		dup[len] = src[len];
		len++;
	}
	dup[len] = '\0';
	return (dup);
}

int	main(void)
{
	char *str = " \%Copy this shit! $$$ ";

	printf("%s", ft_strdup(str));
	return (0);
}
