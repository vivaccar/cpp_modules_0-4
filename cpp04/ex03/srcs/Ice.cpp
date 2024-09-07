#include "../includes/Ice.hpp"

Ice::Ice() {
    this->_type = "ice";
    std::cout << GREEN << "[Ice] default constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice& other) {
    *this = other;
    std::cout << GREEN << "[Ice] copy constructor called" << RESET << std::endl;
}

Ice::~Ice() {
    std::cout << GREEN << "[Ice] destructor called" << RESET << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
    (void) other;
    this->_type = other._type;
    return *this;
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const {
    return (new Ice(*this));
}