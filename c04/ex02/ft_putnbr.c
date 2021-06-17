#include <unistd.h>
void	ft_putnbr(int nb)
{
	char		digit;
	long int	_nb;

	_nb = nb;
	if (_nb < 0)
	{
		write(1, "-", 1);
		_nb = _nb / -1;
	}
	if (_nb <= 9)
	{
		digit = _nb + '0';
		write(1, &digit, 1);
	}
	else
	{
		ft_putnbr(_nb / 10);
		ft_putnbr(_nb % 10);
	}
}
