#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl; 
    this->_name = "";
    this->_hit = 100;
    this->_energy = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
    this->setName(name);
    this->_hit = 100;
    this->_energy = 50;
    this->_attackDamage = 20;
    std::cout << GREEN << "ScavTrap " << this->_name <<
    " was created" << RESET << std::endl; 
}

ScavTrap::~ScavTrap() {
    std::cout << RED << "ScavTrap " << this->_name <<
    " was destroyed" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    this->_name = other.getName();
    this->_hit = other.getHit();
    this->_energy = other.getEnergy();
    this->_attackDamage = other.getAttackDamage();
    return (*this);
}

void ScavTrap::guardGate() {
    std::cout << GREEN << "ScavTrap " << this->_name <<
    " is in Gate Keeper mode" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_hit < 1 || this->_energy < 1)
    {
        std::cout << RED << "ScavTrap " << this->_name <<
        " has no more energy or hit points to attack" << RESET << std::endl;
        return; 
    }
    this->_energy -= 1;
    std::cout << "ScavTrap " << BLUE << this->_name << RESET <<
    " attacks " << RED << target << RESET << " causing " << this->_attackDamage <<
    " points of damage" << std::endl;
    std::cout << BLUE << "ScavTrap " << this->_name <<
    " lost 1 energy with this attack and has " <<
    this->_energy << " of energy now" << std::endl;
}