#include <unistd.h>

void	ft_line_1(void)
{
	int	ln_i;
	int	cl_i;

	ln_i = 1;
	cl_i = 1;
	while (ln_i == 1 && cl_i <= 4)
	{
		if (cl_i == 1)
			write(1, "1 ", 2);
		else if (cl_i == 2)
			write(1, "2 ", 2);
		else if (cl_i == 3)
			write(1, "3 ", 2);
		else
		{
			write(1, "4", 1);
			write(1, "\n", 1);
		}
		cl_i++;
	}
	ln_i++;
}
