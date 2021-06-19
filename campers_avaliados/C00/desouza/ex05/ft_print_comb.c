#include <unistd.h>

void	ft_print_this(char first, char second, char third);

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_print_this (first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}

void	ft_print_this(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first != '7')
	{
		write(1, ", ", 2);
	}
}
