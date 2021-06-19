#include <unistd.h>

void	ft_print_params(char **argv, int params)
{
	int	index;

	index = 1;
	while (argv[index])
	{
		while (*argv[index])
		{
			write(1, argv[index], 1);
			argv[index]++;
		}
		write(1, "\n", 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	ft_print_params(argv, argc);
}
