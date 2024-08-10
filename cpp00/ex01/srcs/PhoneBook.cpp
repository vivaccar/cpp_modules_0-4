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
	if (saved_contacts <= 8)
	{
		std::cout << "\n-------------------------------------------\n";
		std::cout << "            Adding a new contact           \n" << std::endl;
		contacts[saved_contacts].set_first_name();
		contacts[saved_contacts].set_last_name();
		contacts[saved_contacts].set_nickname();
		contacts[saved_contacts].set_darkest_secret();
		contacts[saved_contacts].set_number();
		std::cout << "\nNew Contact \"" << contacts[saved_contacts].get_first_name() << "\" has been created!\n\n";
		saved_contacts += 1;
	}
}

void PhoneBook::search()
{
	for (int i = 0; i < saved_contacts; i++)
	{
		std::cout << contacts[i].get_first_name() << std::endl;
		std::cout << contacts[i].get_last_name() << std::endl;
		std::cout << contacts[i].get_nickname() << std::endl;
		std::cout << contacts[i].get_darkest_secret() << std::endl;
		std::cout << contacts[i].get_number() << std::endl;
	}
}
