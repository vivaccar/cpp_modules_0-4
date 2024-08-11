#include "PhoneBook.hpp"

bool handle_input(std::string user_input, PhoneBook *phonebook)
{
	if (user_input == "ADD" || user_input == "1")
		phonebook->add();
	else if (user_input == "SEARCH" || user_input == "2")
		phonebook->search();
	else if (user_input == "EXIT" || user_input == "3")
		return false;
	else
		std::cout << "Invalid command: Try again\n\n";
	return true;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	user_input;

	while (!std::cin.eof())
	{
		std::cout << "Enter one of These Commands:\n\n1. ADD\n2. SEARCH\n3. EXIT\n\n";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cout << "CTRL-D Pressed. Exiting Phonebook!" << std::endl;
			std::exit(0);
		}
		if (!handle_input(user_input, &phonebook))
			break ;
	}
}