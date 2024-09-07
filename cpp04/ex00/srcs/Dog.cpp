#include "../includes/Dog.hpp"

Dog::Dog() {
    std::cout << GREEN << "[DOG] default constructor called" << RESET << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog& other) {
    *this = other;
    std::cout << GREEN << "[DOG] copy constructor called" << RESET << std::endl;
}

Dog::~Dog() {
    std::cout << RED << "[DOG] destructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    this->_type = other._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "[DOG] --> " << this->_type << ": " << "WOOF" << std::endl;
}