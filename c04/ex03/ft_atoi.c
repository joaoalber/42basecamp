#include <unistd.h>
#include <stdio.h>

int		convert_to_i(char *str);
int		ft_strlen(char *str);
int		ft_pow(int x, int y);

int	ft_atoi(char *str)
{
	int		index;
	char	_str[12];
	int		_str_index;
	int		minus_sign;

	index = 0;
	_str_index = 0;
	minus_sign = 0;
	while (str[index])
	{
		if (str[index] == '-')
			minus_sign++;
		while ((str[index] >= 48) && (str[index] <= 57))
			_str[_str_index++] = str[index++];
		if (_str_index > 0)
		{
			_str[_str_index] = '\0';
			if (minus_sign % 2 == 1)
				return (-1 * (convert_to_i(_str)));
			return (convert_to_i(_str));
		}
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
