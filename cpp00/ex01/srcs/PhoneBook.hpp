#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int saved_contacts;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add();
		void search();
		void print_all_contacts();
		std::string truncate(std::string str);
};

#endif