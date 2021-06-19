void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division_result;
	int	rest_result;

	division_result = *a / *b;
	rest_result = *a % *b;
	*a = division_result;
	*b = rest_result;
}
