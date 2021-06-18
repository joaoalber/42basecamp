int	ft_sqrt(int nb)
{
	long int	root;
	long int	has_sqrt;
	long int	control;

	control = 5;
	has_sqrt = 4;
	root = 2;
	if (nb == 1)
		return (nb);
	if (nb <= 0)
		return (0);
	while (root < nb)
	{
		if (root * root > 2147483647)
			return (0);
		if (nb == has_sqrt)
			return (root);
		has_sqrt += control;
		control += 2;
		root++;
	}
	return (0);
}
