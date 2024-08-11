#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->saved_contacts = 0;
	std::cout << "     Welcome to the Amazing PhoneBook!     " << std::endl;
	std::cout << "-------------------------------------------\n" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Exiting PhoneBook, See you soon!" << std::endl;
}

void PhoneBook::add()
{
	if (saved_contacts < 8)
	{
		std::cout << "\n-------------------------------------------\n";
		std::cout << "            Adding a new contact           \n" << std::endl;
		contacts[saved_contacts].set_first_name();
		contacts[saved_contacts].set_last_name();
		contacts[saved_contacts].set_nickname();
		contacts[saved_contacts].set_darkest_secret();
		contacts[saved_contacts].set_number();
		saved_contacts += 1;
	}
}

std::string PhoneBook::truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::print_all_contacts()
{
	const int	width = 10;

	std::cout << std::setw(width) << truncate("INDEX") << "|";
	std::cout << std::setw(width) << truncate("FIRST NAME") << "|";
	std::cout << std::setw(width) << truncate("LAST NAME") << "|";
	std::cout << std::setw(width) << truncate("NICKNAME") << "|" << std::endl;
	for (int i = 0; i < saved_contacts; i++)
	{
		std::cout << std::setw(width) << i + 1 << "|";
		std::cout << std::setw(width) << truncate(contacts[i].get_first_name()) << "|";
		std::cout << std::setw(width) << truncate(contacts[i].get_last_name()) << "|";
		std::cout << std::setw(width) << truncate(contacts[i].get_nickname()) << "|" << std::endl;
	}
}

void PhoneBook::search()
{
	if (saved_contacts == 0)
	{
		std::cout << "There is no contacts here yet. Returning to Menu...\n" << std::endl;
		return;
	}
	print_all_contacts();
}
