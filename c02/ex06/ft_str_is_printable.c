int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!(str[index] >= 32 && str[index] <= 127))
			return (0);
		index++;
	}
	return (1);
}
