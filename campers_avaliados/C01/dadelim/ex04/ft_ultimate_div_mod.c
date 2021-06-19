void	ft_ultimate_div_mod(int *a, int *b)
{
	int	auxa;
	int	auxb;

	if (a > 0 && b > 0)
	{
		auxa = *a;
		auxb = *b;
		*a = auxa / auxb;
		*b = auxa % auxb;
	}
}
