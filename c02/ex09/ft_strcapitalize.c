int	is_alpha_char(char value);

char	*ft_strcapitalize(char *str)
{
	int	need_capitalize;
	int	index;
	int	is_alpha;

	index = 0;
	need_capitalize = 1;
	while (str[index] != '\0')
	{
		is_alpha = is_alpha_char(str[index]);
		if (is_alpha == 0)
			need_capitalize = 1;
		else if (str[index] >= 65 && str[index] <= 90)
			str[index] = str[index] + 32;
		if (is_alpha == 1 && need_capitalize == 1)
		{
			if (str[index] >= 97 && str[index] <= 122)
				str[index] = str[index] - 32;
			need_capitalize = 0;
		}
		index++;
	}
	return (str);
}

int	is_alpha_char(char value)
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
	ascii_value = 48;
	while (ascii_value <= 57)
		if (value == ascii_value++)
			return (1);
	return (0);
}
