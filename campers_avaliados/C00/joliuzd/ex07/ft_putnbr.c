#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int	size_nb (int n)
{
	int	t_nb;

	t_nb = 1;
	while (n > 9)
	{
		n = n / 10;
		t_nb++;
	}
	return (t_nb);
}

void	ft_putnumber (int	int_num, int	num_size)
{
	int	i;
	int	rest;

	while (num_size > 0)
	{
		i = (num_size);
		rest = int_num;
		while (i > 1)
		{
			rest = rest / 10;
			i--;
		}
		ft_putchar((rest % 10) + 48);
		num_size--;
	}
}

void	ft_putnbr (int nb)
{
	int	nb_size;

	nb_size = size_nb(nb);
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (0 > nb)
	{
		ft_putchar('-');
		ft_putnbr (nb * -1);
	}
	else if (nb <= 214748647)
	{
		ft_putnumber(nb, nb_size);
	}
}
