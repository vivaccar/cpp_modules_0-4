#include "../includes/Cat.hpp"

Cat::Cat() {
    std::cout << GREEN << "[CAT] default constructor called" << RESET << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat& other) {
    *this = other;
}

Cat::~Cat() {
    std::cout << RED << "[CAT] destructor called" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    this->_type = other._type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "[CAT] --> " << this->_type << ": " << "MEEOW" << std::endl;
}