#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	std::cout << this->name << " created with the weapon " <<
	this->weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << this->name << " (HumanA) destroyed!" << std::endl;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their "
	<< this->weapon.getType() << std::endl;
}