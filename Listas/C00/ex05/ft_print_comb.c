#include <unistd.h>

void	ft_result(char num_1, char num_2, char num_3)
{
	if (num_1 != '7')
	{
		write (1, &num_1, 1);
		write (1, &num_2, 1);
		write (1, &num_3, 1);
		write (1, ";", 1);
		write (1, " ", 1);
	}
	else
	{
		write (1, &num_1, 1);
		write (1, &num_2, 1);
		write (1, &num_3, 1);
	}
}

void	ft_print_comb(void)
{
	char	num_1;
	char	num_2;
	char	num_3;

	num_1 = '0';
	while (num_1 <= '7')
	{
		num_2 = '1';
		while (num_2 <= '8')
		{
			num_3 = '2';
			while (num_3 <= '9')
			{
				if (num_1 < num_2 && num_2 < num_3)
					ft_result(num_1, num_2, num_3);
				num_3++;
			}
			num_2++;
		}
		num_1++;
	}
}
