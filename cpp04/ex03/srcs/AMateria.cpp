#include "../includes/AMateria.hpp"

AMateria::AMateria() {
    this->_isEquiped = false;
    //std::cout << GREEN << "AMateria default constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const& type) {
    this->_type = type;
    this->_isEquiped = false;
    //std::cout << GREEN << "AMateria parameterized constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& other) {
    *this = other;
}

AMateria::~AMateria() {
    //std::cout << RED << "AMateria destructor called" << RESET << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
    this->_type = other._type;
    return (*this);
}

std::string const& AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "AMateria 'use()' can't do anything to " << target.getName() << std::endl;
}

bool AMateria::isEquiped() const {
    return this->_isEquiped;
}

void AMateria::setEquiped(bool status) {
    this->_isEquiped = status;
}