void	ft_rev_int_tab(int *tab, int size)
{
	int	position;
	int	aux;
	int	index;

	position = 0;
	index = size - 1;
	while (position < size / 2)
	{
		aux = tab[index - position];
		tab[index - position] = tab[position];
		tab[position] = aux;
		position++;
	}
}
