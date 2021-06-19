#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	enter[18] = "Teste5";
	char	exit[18] = "";

	ft_strncpy(exit, enter, 16);
	printf ("%s\n", exit);
	return (0);
}
