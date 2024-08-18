#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::fstream file;

	if (ac != 4)
	{
		std::cout << "Invalid input: Please enter <filename> <oldstr> <newstr>" << std::endl;
		return (1);
	}

	(void)av;
}