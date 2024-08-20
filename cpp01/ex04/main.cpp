#include <iostream>
#include <fstream>
#include <cstdlib>

void replace(std::ofstream& output_file, std::ifstream& input_file, char **av)
{
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;
	size_t i = 0;

    while (std::getline(input_file, line))
    {
        i = 0;
        i = line.find(s1, i);
		while (i != std::string::npos)
		{
            line.erase(i, s1.length());
            line.insert(i, s2);
            i += s2.length();
			i = line.find(s1, i);
        }
        output_file << line << std::endl;
    }
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid input: Please enter <filename> <oldstr> <newstr>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string out_file = std::string(av[1]).append(".replace");

	const char *input_file_name = av[1];
	const char *output_file_name = out_file.c_str();

	std::ifstream input_file;
	std::ofstream output_file;
	input_file.open(input_file_name);
	if (!input_file.is_open())
	{
		std::cout << "Error when trying to open Input file.";
		return (EXIT_FAILURE);
	}
	output_file.open(output_file_name);
	if (!output_file.is_open())
	{
		std::cout << "Error when trying to open Output file.";
		return (EXIT_FAILURE);
	}
	replace(output_file, input_file, av);
}
