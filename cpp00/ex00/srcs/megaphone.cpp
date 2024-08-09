#include <iostream>

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (av[i])
		{
			for (int j = 0; av[i][j]; j++)
			{
				av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
			}
			i++;
			if (av[i])
				std::cout << " ";
		}
	}
	std::cout << "\n";
	return (0);
}
