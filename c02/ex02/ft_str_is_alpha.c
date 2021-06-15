int	is_alpha(char value);

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
		if (is_alpha(str[index++]) == 0)
			return (0);
	return (1);
}

int	is_alpha(char value)
{
	char	ascii_value;

	ascii_value = 97;
	while (ascii_value <= 122)
		if (value == ascii_value++)
			return (1);
	ascii_value = 65;
	while (ascii_value <= 90)
		if (value == ascii_value++)
			return (1);
	return (0);
}
