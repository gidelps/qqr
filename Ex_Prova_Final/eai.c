#include <unistd.h>

int	main(int argc, char **argv)
{
	int a;

	a = 0;
	while (argc == 2)
	{
		while (argv[1][a] != '\0')
		{
			if (argv[1][a] == 'a')
			{
				write (1, "a\n", 2);
				return (0);
			}
		a++;
		}
		write (1, "\n", 1);
		return (0);
	}
	write (1, "a\n", 2);
	return (0);
}

