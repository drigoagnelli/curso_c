#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	enter[18] = "Ai Eu Se Consagro";
	char	exit[18] = "";

	ft_strcpy(exit, enter);
	printf ("%s\n", exit);
	return (0);
}
