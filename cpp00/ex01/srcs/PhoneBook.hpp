#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int saved_contacts;
		int	oldest_contact;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void add();
		void search();
		void print_all_contacts();
		std::string truncate(std::string str);
		void print_index();
};

#endif