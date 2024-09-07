#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("") {
    std::cout << GREEN << "[WrongAnimal] Default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    std::cout << GREEN << "[WrongAnimal] copy constructor called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    this->_type = other._type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << RED << "[WrongAnimal] Destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "[WrongAnimal] --> " << this->_type << " nothing to say..." << std::endl; 
}

std::string WrongAnimal::getType() const {
    return this->_type;
}

void WrongAnimal::setType(std::string type) {
    this->_type = type;
}