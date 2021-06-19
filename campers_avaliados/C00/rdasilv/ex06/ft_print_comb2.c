#include <unistd.h>

void	numberConverter(int number);

void	ft_print_comb2(void)
{	
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			if (x != y)
			{
				numberConverter(x);
				write(1, " ", 1);
				numberConverter(y);
				if (x != 98)
					write(1, ", ", 2);
			}
			y++;
		}
		x++;
		y = x + 1;
	}
}

void	numberConverter(int number)
{
	char	resultado[2];

	if (number <= 9)
	{
		resultado[0] = 48;
		resultado[1] = number + 48;
	}
	else
	{
		resultado[0] = (number / 10) + 48;
		resultado[1] = (number % 10) + 48;
	}
	write(1, &resultado, 2);
}
