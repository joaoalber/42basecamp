#include <unistd.h>

int		ft_decompose_into_units(int number, int measurement_unit);
void	ft_print_number(int number);
int		ft_valid_sequence(int hundreds, int tens, int units);

void	ft_print_comb(void)
{
	int	i;
	int	hundreds;
	int	tens;
	int	units;

	i = 0;
	while (i <= 999)
	{
		hundreds = ft_decompose_into_units(i, 100);
		tens = ft_decompose_into_units(i, 10);
		units = ft_decompose_into_units(i, 1);
		if (ft_valid_sequence(hundreds, tens, units) == 1)
		{
			ft_print_number(hundreds);
			ft_print_number(tens);
			ft_print_number(units);
			write(1, "\n", 1);
		}
		i++;
	}
}

void	ft_print_number(int number)
{
	char	p;

	p = number + '0';
	write(1, &p, 1);
}

int	ft_decompose_into_units(int number, int measurement_unit)
{
	if (number < measurement_unit)
		return (0);
	if ((number >= 1) && (number <= 9))
		return (number);
	if (measurement_unit == 1)
		return (ft_decompose_into_units((number % 100) % 10, measurement_unit));
	if ((number >= 10) && (number <= 99))
		return (number / 10);
	if (measurement_unit == 100)
		return (number / 100);
	if (measurement_unit == 10)
		return (ft_decompose_into_units((number % 100), measurement_unit));
	return (0);
}

int	ft_valid_sequence(int hundreds, int tens, int units)
{
	if ((units > tens) && (tens > hundreds))
		return (1);
	return (0);
}
