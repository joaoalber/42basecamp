char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0')
		return (str);
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}
