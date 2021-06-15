int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (!(str[index] >= 97 && str[index] <= 122))
			return (0);
		index++;
	}
	return (1);
}
