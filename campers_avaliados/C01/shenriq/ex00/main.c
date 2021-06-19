#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	value;

	value = 0;
	ft_ft(&value);
	printf("%d\n", value);
}
