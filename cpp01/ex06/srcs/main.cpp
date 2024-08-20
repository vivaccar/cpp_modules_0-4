#include "../includes/Harl.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Bad arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	Harl harl;
	harl.complain(av[1]);
	return (EXIT_SUCCESS);
}