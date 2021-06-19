#include <unistd.h>

void	ft_print_program_name(char *argv)
{
	while (*argv)
	{
		write(1, &*argv, 1);
		argv++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 1)
		return (0);
	ft_print_program_name(argv[0]);
}
