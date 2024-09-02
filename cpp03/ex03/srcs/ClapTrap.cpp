#include "../includes/ClapTrap.hpp"

// ------Orthodox Canonical Form-------

ClapTrap::ClapTrap() {
    this->_name = "";
    this->_hit = 10;
    this->_energy = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << RED << "ClapTrap " << this->_name <<
    " was destroyed" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    this->_name = other.getName();
    this->_hit = other.getHit();
    this->_attackDamage = other.getAttackDamage();
    this->_energy = other.getEnergy();
    return (*this);
}

//  -------CONSTRUCTOR-------

ClapTrap::ClapTrap(std::string name)
{
    
    this->_name = name;
    this->_hit = 10;
    this->_energy = 10;
    this->_attackDamage = 0;
    std::cout << GREEN << "ClapTrap " << this->_name <<
    " was created" << RESET << std::endl;
}

//  -------GETTERS AND SETTERS--------

void ClapTrap::setName(std::string name) {
    this->_name = name;
}

void ClapTrap::setEnergy(unsigned int amount) {
    this->_energy = amount;
}

void ClapTrap::setHit(unsigned int amount) {
    this->_hit = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount) {
    this->_attackDamage = amount;
}

std::string ClapTrap::getName() const {
    return (this->_name);
}

unsigned int ClapTrap::getEnergy() const {
    return (this->_energy);
}

unsigned int ClapTrap::getHit() const {
    return (this->_hit);
}

unsigned int ClapTrap::getAttackDamage() const {
    return (this->_attackDamage);
}

// MEMBER FUNCTIONS 

void ClapTrap::attack(const std::string& target) {
    if (this->_hit < 1 || this->_energy < 1)
    {
        std::cout << RED << "ClapTrap " << this->_name <<
        " has no more energy or hit points to attack" << RESET << std::endl;
        return; 
    }
    this->_energy -= 1;
    std::cout << "ClapTrap " << BLUE << this->_name << RESET <<
    " attacks " << RED << target << RESET << " causing " << this->_attackDamage <<
    " points of damage" << std::endl;
    std::cout << BLUE << "ClapTrap " << this->_name <<
    " lost 1 energy with this attack and has " <<
    this->_energy << " of energy now" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount >= this->_hit)
        this->_hit = 0;
    else
        this->_hit -= amount;
    std::cout << RED << "Clap Trap " << this->_name <<
    " lost " << amount << " hit points and now has " <<
    this->_hit << " hit points." << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy < 1 || this->_hit < 1)
    {
        std::cout << RED << "ClapTrap " << this->_name <<
        " has no more energy or hit points to be repaired" << RESET << std::endl;
        return; 
    }
    this->_energy -= 1;
    this->_hit += amount;
    std::cout << GREEN << "Clap Trap " << this->_name <<
    " was repaired, won " << amount << " hit points and now has " <<
    this->_hit << " hit points." << RESET << std::endl;
    std::cout << BLUE << "ClapTrap " << this->_name <<
    " lost 1 energy with this repair and has " <<
    this->_energy << " of energy now" << std::endl;
}

