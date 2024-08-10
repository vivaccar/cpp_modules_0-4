#include "PhoneBook.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->darkest_secret = "";
	this->number = "";
}

Contact::~Contact()
{

}

void Contact::set_first_name()
{
	std::string user_input = "";

	while (user_input.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cout << "CTRL-D Pressed. Exiting Phonebook!" << std::endl;
			std::exit(0);
		}
		if (user_input.empty())
			std::cout << "Please enter a valid First Name." << std::endl;
		this->first_name = user_input;
	}
}

void Contact::set_last_name()
{
	std::string user_input = "";

	while (user_input.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cout << "CTRL-D Pressed. Exiting Phonebook!" << std::endl;
			std::exit(0);
		}
		if (user_input.empty())
			std::cout << "Please enter a valid Last Name." << std::endl;
		this->last_name = user_input;
	}
}

void Contact::set_nickname()
{
	std::string user_input = "";

	while (user_input.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cout << "CTRL-D Pressed. Exiting Phonebook!" << std::endl;
			std::exit(0);
		}
		if (user_input.empty())
			std::cout << "Please enter a valid Nickname." << std::endl;
		this->nickname = user_input;
	}
}

void Contact::set_darkest_secret()
{
	std::string user_input = "";

	while (user_input.empty())
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cout << "CTRL-D Pressed. Exiting Phonebook!" << std::endl;
			std::exit(0);
		}
		if (user_input.empty())
			std::cout << "Please enter a valid Darkset Secret." << std::endl;
		this->darkest_secret = user_input;
	}
}

void Contact::set_number()
{
	std::string user_input = "\0";

	while (user_input.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, user_input);
		if (std::cin.eof())
		{
			std::cout << "CTRL-D Pressed. Exiting Phonebook!" << std::endl;
			std::exit(0);
		}
		if (user_input.empty())
			std::cout << "Please enter a valid Phone number." << std::endl;
		this->number = user_input;
	}
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

std::string Contact::get_number()
{
	return (this->number);
}