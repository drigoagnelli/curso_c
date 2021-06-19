#include <unistd.h>

void	ft_print_alphabet (void)
{
	int	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		write (1, &alphabet, 1);
		alphabet ++;
	}
}
