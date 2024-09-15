#include "../includes/Animal.hpp"

Animal::Animal() : _type("") {
    std::cout << GREEN << "[Animal] Default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << GREEN << "[Animal] copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    Brain *other_brain = other.getBrain();
    
    this->_type = other._type;
    this->brain = new Brain(*other_brain);
    return (*this);
}

Animal::~Animal() {
    std::cout << RED << "[Animal] Destructor called" << RESET << std::endl;
}

void Animal::makeSound() const {
    std::cout << "[Animal] --> " << this->_type << " nothing to say..." << std::endl; 
}

std::string Animal::getType() const {
    return this->_type;
}

void Animal::setType(std::string type) {
    this->_type = type;
}

Brain* Animal::getBrain() const {
    return this->brain;
}

