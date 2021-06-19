#include <unistd.h>

void	ft_print_comb(void)
{
	char	number1;
	char	number2;
	char	number3;

	number1 = 48;
	number2 = 49;
	number3 = 50;
	while (number1 <= 57)
	{
		while (number2 <= 57)
		{
			while (number3 <= 57)
			{
				ft_print_number(number1, number2, number3);
				number3++;
			}
			number2++;
			number3 = number2 + 1;
		}
		number2 = number1 + 1;
		number1++;
	}
}
