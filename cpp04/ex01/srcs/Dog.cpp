#include "../includes/Dog.hpp"

Dog::Dog() {
    std::cout << GREEN << "[DOG] default constructor called" << RESET << std::endl;
    this->brain = new Brain;
    this->_type = "Dog";
}

Dog::Dog(const Dog& other) {
    *this = other;
    std::cout << GREEN << "[DOG] copy constructor called" << RESET << std::endl;
}

Dog::~Dog() {
    std::cout << RED << "[DOG] destructor called" << RESET << std::endl;
    delete this->brain;
}

Dog& Dog::operator=(const Dog& other) {
    Brain *other_brain = other.getBrain();
    
    this->_type = other._type;
    this->brain = new Brain(*other_brain);
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "[DOG] --> " << this->_type << ": " << "WOOF" << std::endl;
}

Brain* Dog::getBrain() const {
    return this->brain;
}