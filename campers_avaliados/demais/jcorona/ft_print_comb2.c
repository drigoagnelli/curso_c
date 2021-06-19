#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_print_comb(void)
{
	char	one;
	char	two;

	one = 0;
	while (one < 100)
	{
		two = one + 1;
		while (two < 100 )
		{
			ft_putchar((one / 10 + '0'), (one % 10 + '0'));
			write(1, " ", 1);
			ft_putchar((two / 10 + '0'), (two % 10 + '0'));
			two++;
			if (!(one == 98))
				write(1, ", ", 2);
		}
		one++;
	}
}
