void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1] && i < size - 1)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else if (tab[i] <= tab[i + 1])
		{
			i++;
		}
		if (i == size - 1)
		{
			return ;
		}
	}
}
