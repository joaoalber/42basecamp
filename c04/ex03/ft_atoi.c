#include <unistd.h>

int		convert_to_i(char *str);
int		ft_strlen(char *str);
int		ft_pow(int x, int y);
int		has_invalid_space(char *str);

int	ft_atoi(char *str)
{
	int		index;
	char	_str[12];
	int		_str_index;
	int		minus_sign;

	index = 0;
	_str_index = 0;
	minus_sign = 0;
	if (has_invalid_space(str) == 1)
		return (0);
	while (str[index])
	{
		while ((str[index] >= 48) && (str[index] <= 57))
			_str[_str_index++] = str[index++];
		if (str[index++] == '-')
			minus_sign++;
		if (_str_index > 0)
		{
			_str[_str_index] = '\0';
			if (minus_sign % 2 == 1)
				return (-1 * (convert_to_i(_str)));
			return (convert_to_i(_str));
		}
	}
	return (0);
}

int	has_invalid_space(char *str)
{
	int	signs;
	int	index;

	signs = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == '-' || str[index] == '+')
			signs++;
		if (str[index] <= 32 && signs > 0)
			return (1);
		index++;
	}
	return (0);
}

int	convert_to_i(char *str)
{
	int	index;
	int	digits;
	int	integer_value;

	index = 0;
	digits = ft_strlen(str);
	integer_value = (*str - 48) * (ft_pow(10, digits - 1));
	if (*str)
		return (integer_value + convert_to_i(++str));
	return (0);
}

int 	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_pow(int x, int y)
{
	if (y > 0)
		return (x * ft_pow(x, y - 1));
	return (1);
}
