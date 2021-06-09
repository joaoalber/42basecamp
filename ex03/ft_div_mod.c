void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	ab_mod;
	int	ab_div;

	ab_mod = a % b;
	ab_div = a / b;
	*mod = ab_mod;
	*div = ab_div;
}
