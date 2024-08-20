#include "../includes/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << GREEN << "DEBUG -> " << RESET
	<<"I love having extra bacon" <<
	" for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void Harl::info(void) {
	std::cout << GREEN << "INFO -> " << RESET
	<< "I cannot believe adding extra bacon costs more money."
	<< " You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void Harl::warning(void) {
	std::cout << GREEN << "WARNING ->" << RESET 
	<< "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void Harl::error(void) {
	std::cout << GREEN << "ERROR -> " << RESET
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*members_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	n = 4;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			n = i;
	}
	switch (n)
	{
	case 0:
		(this->*members_ptr[n++])();
	case 1:
		(this->*members_ptr[n++])();
	case 2:
		(this->*members_ptr[n++])();
	case 3:
		(this->*members_ptr[n])();
		break;
	default:
		std::cout << RED <<"[ Probably complaining about insignificant problems ]"
		<< RESET << std::endl;
	}
}