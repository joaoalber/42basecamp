#include <unistd.h>

void	ft_is_negative(int n)
{
	char	number_is;

	if (n >= 0)
		number_is = 'P';
	else
		number_is = 'N';
	write(1, &number_is, 1);
}
