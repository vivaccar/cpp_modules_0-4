#include "../includes/Dog.hpp"

Dog::Dog() {
    std::cout << GREEN << "[DOG] default constructor called" << RESET << std::endl;
    this->brain = new Brain;
    this->_type = "Dog";
}

Dog::Dog(const Dog& other) {
    *this = other;
}

Dog::~Dog() {
    std::cout << RED << "[DOG] destructor called" << RESET << std::endl;
    delete this->brain;
}

Dog& Dog::operator=(const Dog& other) {
    this->_type = other._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "[DOG] --> " << this->_type << ": " << "WOOF" << std::endl;
}