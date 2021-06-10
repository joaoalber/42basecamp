#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	ascii_value;

	ascii_value = 97;
	while (ascii_value <= 122)
	{
		write(1, &ascii_value, 1);
		ascii_value++;
	}
}
