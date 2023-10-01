#include <unistd.h>

void ft_print_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while(letter <= 'z')
	{
		ft_putchar(letter++);
	}
}

int	main(void)
  {
 	ft_print_alphabet();
 	return (0);
  }
 
