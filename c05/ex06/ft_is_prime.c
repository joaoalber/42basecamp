int	ft_is_prime(int nb)
{
	int	i;
	int	divisibles;

	i = 1;
	divisibles = 0;
	if (nb <= 1)
		return (0);
	while (i < (nb / 2) + 1)
	{
		if (nb % i == 0)
			divisibles++;
		if (divisibles > 1)
			return (0);
		i++;
	}
	return (1);
}
