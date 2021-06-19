#include <unistd.h>

void	ft_putchar(char one, char two, char three)
{
	write (1, &one, 1);
	write (1, &two, 1);
	write (1, &three, 1);
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	while (one <= '7')
	{
		two = one + 1;
		while (two <= '8' )
		{
			three = two + 1;
			while (three <= '9')
			{
				ft_putchar(one, two, three);
				if (!(one == '7' && two == '8' && three == '9'))
					write(1, ", ", 2);
				three++;
			}
			two++;
		}
		one++;
	}
}
