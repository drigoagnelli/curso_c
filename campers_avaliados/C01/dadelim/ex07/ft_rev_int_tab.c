void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	aux;

	i = 0;
	end = size - 1;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[end];
		tab[end] = aux;
		i++;
		end--;
	}
}
