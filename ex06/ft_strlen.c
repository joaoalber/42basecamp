#include <stdio.h>

int	ft_strlen(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
		position++;
	return (position);
}
