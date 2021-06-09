#include <unistd.h>

void	ft_putstr(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
		write(1, &str[position++], 1);
}
