#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_name = "";
    this->_hit = FragTrap::_hit;
    this->_energy = ScavTrap::_energy;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) {
    ClapTrap::_name = name + "_clap_name";
    this->_name = name;
    this->_hit = FragTrap::_hit;
    this->_energy = ScavTrap::_energy;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap() {
    std::cout << RED << "DiamondTrap " << this->_name <<
    " was destroyed" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    this->ClapTrap::_name = other.ClapTrap::_name;
    this->_name = other._name;
    this->_hit = other._hit;
    this->_attackDamage = other._attackDamage;
    this->_energy = other._energy;
    return (*this);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
    std::cout << "DiamondTrap name is " << this->_name << std::endl;
}

std::string DiamondTrap::getDiamondName() const {
    return (this->_name);
}