#include <iostream>
#include <fstream>
#include <cstdlib>

int	main(int ac, char **av)
{
	std::fstream file;

	if (ac != 4)
	{
		std::cout << "Invalid input: Please enter <filename> <oldstr> <newstr>" << std::endl;
		return (1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream input_file;
	std::ofstream output_file;
	input_file.open(av[1]);
	(void)av;
}