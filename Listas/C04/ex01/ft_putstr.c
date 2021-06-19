#include <unistd.h>

void	ft_putstr(char *str)
{
	int	indicator;

	indicator = 0;
	while (str[indicator] != '\0')
	{
		write (1, &*(str + indicator), 1);
		indicator++;
	}
}
