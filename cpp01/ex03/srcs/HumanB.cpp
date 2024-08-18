#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	std::cout << this->name << " created withot any weapon " << std::endl;
}

HumanB::~HumanB() {
	std::cout << this->name << " (HumanB) destroyed!" << std::endl;
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

