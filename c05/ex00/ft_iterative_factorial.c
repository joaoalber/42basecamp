int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 1)
		res *= ((nb--) - 1);
	return (res);
}
