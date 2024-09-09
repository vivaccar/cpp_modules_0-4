#include "../includes/Cure.hpp"

Cure::Cure() {
    this->_type = "cure";
    std::cout << GREEN << "[Cure] default constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure& other) {
    *this = other;
    std::cout << GREEN << "[Cure] copy constructor called" << RESET << std::endl;
}

Cure::~Cure() {
    std::cout << RED << "[Cure] destructor called" << RESET << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
    (void) other;
    this->_type = other._type;
    return *this;
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure(*this));
}