#include "../includes/AMateria.hpp"

AMateria::AMateria() {
    this->_status = CREATED;
    //std::cout << GREEN << "AMateria default constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const& type) {
    this->_type = type;
    this->_status = CREATED;
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

int AMateria::getStatus() const {
    return this->_status;
}

void AMateria::setStatus(int status) {
    this->_status = status;
}