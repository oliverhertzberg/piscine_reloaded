#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char *dup;
	
	i = 0;
	len = 0;
	while (src[len])
		len++;
	dup = malloc(len + 1);
	if (dup == NULL)
		return (0);
	while (i <= len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

int	main(void)
{
	char *str = " \%Copy this shit! $$$ ";

	printf("%s", ft_strdup(str));
	return (0);
}
