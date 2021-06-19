#include <unistd.h>

void	ft_print_reverse_alphabet (void)
{
	int	i;

	i = 57;
	while (i >= 48)
	{
		write(1, &i, 1);
		i--;
	}
}
