void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	last_pos;
	int	i;

	last_pos = size - 1;
	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[last_pos];
		tab[last_pos] = temp;
		i++;
		last_pos--;
	}
}
