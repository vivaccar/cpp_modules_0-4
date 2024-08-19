#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	std::cout << BLUE << this->name << " created withot any weapon "
	<< RESET << std::endl;
}

HumanB::~HumanB() {
	std::cout << RED << this->name
	<< " (HumanB) destroyed!" << RESET << std::endl;
}

void HumanB::attack() {
	if (!this->weapon)
	{
		std::cout << this->name << " has no weapon to attack!" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their "
	<< this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
} 

