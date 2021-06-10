#include <unistd.h>

void	ft_print_numbers(void)
{
	int	ascii_value;

	ascii_value = 48;
	while (ascii_value <= 57)
	{
		write(1, &ascii_value, 1);
		ascii_value++;
	}
}
