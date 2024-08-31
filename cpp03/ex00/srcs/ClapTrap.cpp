#include "../includes/ClapTrap.hpp"

// ------Orthodox Canonical Form-------

ClapTrap::ClapTrap() {
    this->_name = "";
    this->_hit = 10;
    this->_energy = 10;
    this->_attackDamage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " was destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    *this = other;
}

/* ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    // to develop
} */

//  -------CONSTRUCTOR-------

ClapTrap::ClapTrap(std::string name)
{
    
    this->_name = name;
    this->_hit = 10;
    this->_energy = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap " << this->_name << " was created" << std::endl;
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
    
}

