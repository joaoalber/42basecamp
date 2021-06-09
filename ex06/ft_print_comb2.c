#include <unistd.h>

void ft_writer(int first, int second);

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			
			ft_writer((i / 10), (i % 10));
			write(1, " ", 1);
			ft_writer((j / 10), (j % 10));
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

void ft_writer(int first, int second)
{
	char first_number;
	char second_number;

	first_number = first + '0';
	second_number = second + '0';
	write(1, &first_number, 1);
	write(1, &second_number, 1);
}
