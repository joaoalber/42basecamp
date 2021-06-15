#include <unistd.h>

void	dec_to_hex(unsigned char value);

void	ft_putstr_non_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 32 && str[index] <= 127))
			dec_to_hex(str[index]);
		else
			write(1, &str[index], 1);
		index++;
	}
}

void	dec_to_hex(unsigned char value)
{
	unsigned char	first_digit;
	unsigned char	second_digit;

	write(1, "\\", 1);
	if (value / 16 >= 10)
		first_digit = ((value / 16) % 10) + 97;
	else
		first_digit = (value / 16) + '0';
	if (value % 16 >= 10)
		second_digit = (value % 16) + 87;
	else
		second_digit = (value % 16) + '0';
	write(1, &first_digit, 1);
	write(1, &second_digit, 1);
}
