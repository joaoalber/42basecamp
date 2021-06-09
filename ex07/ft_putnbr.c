#include <unistd.h>

void ft_putnbr(int nb)
{
	char digit;

	if (nb <= 9)
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
