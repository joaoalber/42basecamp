int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	int	index;

	index = 0;
	while (*str)
	{
		if (str[index] == to_find[index])
		{
			while (to_find[index])
			{
				if (str[index] != to_find[index])
					break ;
				index++;
			}
			if (ft_strlen(to_find) == index)
				return (str);
		}
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
		position++;
	return (position);
}
