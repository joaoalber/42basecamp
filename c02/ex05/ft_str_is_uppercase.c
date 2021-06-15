int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!(str[index] >= 65 && str[index] <= 90))
			return (0);
		index++;
	}
	return (1);
}
