#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}
