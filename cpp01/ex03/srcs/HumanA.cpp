#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	std::cout << BLUE << this->name
	<< " created with the weapon " <<
	this->weapon.getType() << RESET << std::endl;
}

HumanA::~HumanA() {
	std::cout << RED << this->name << " (HumanA) destroyed!"
	<< RESET << std::endl;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their "
	<< this->weapon.getType() << std::endl;
}