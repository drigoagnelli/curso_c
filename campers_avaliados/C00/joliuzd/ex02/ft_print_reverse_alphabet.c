#include <unistd.h>

void	ft_print_reverse_alphabet (void)
{
	int	reverse_alphabet;

	reverse_alphabet = 'z';
	while (reverse_alphabet >= 'a')
	{
		write(1, &reverse_alphabet, 1);
		reverse_alphabet --;
	}
}
