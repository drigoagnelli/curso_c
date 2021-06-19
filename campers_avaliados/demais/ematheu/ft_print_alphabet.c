#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 122)
	{
		write (1, &letter, 1);
		letter++;
	}
}
