#include "../includes/AMateria.hpp"

AMateria::AMateria() {
    std::cout << GREEN << "AMateria default constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const& type) {
    this->_type = type;
    std::cout << GREEN << "AMateria parameterized constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria& other) {
    *this = other;
}

AMateria::~AMateria() {
    std::cout << RED << "AMateria destructor called" << RESET << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other) {
    this->_type = other._type;
    return (*this);
}

std::string const& AMateria::getType() const {
    return this->_type;
}

void AMateria::use(ICharacter& target) {
    (void) target;
    // ?
}