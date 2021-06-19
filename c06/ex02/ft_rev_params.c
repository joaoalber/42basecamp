#include <unistd.h>

void	ft_rev_params(char **argv, int params)
{
	int	index;

	index = params - 1;
	while (index > 0)
	{
		while (*argv[index])
		{
			write(1, argv[index], 1);
			argv[index]++;
		}
		write(1, "\n", 1);
		index--;
	}
}

int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	ft_rev_params(argv, argc);
}
