#include "../includes/Cat.hpp"

Cat::Cat() {
    std::cout << GREEN << "[CAT] default constructor called" << RESET << std::endl;
    this->brain = new Brain;
    this->_type = "Cat";
}

Cat::Cat(const Cat& other) {
    *this = other;
    std::cout << GREEN << "[CAT] copy constructor called" << RESET << std::endl;
}

Cat::~Cat() {
    std::cout << RED << "[CAT] destructor called" << RESET << std::endl;
    delete this->brain;
}

Cat& Cat::operator=(const Cat& other) {
    Brain *other_brain = other.getBrain();
    
    this->_type = other._type;
    delete this->brain;
    this->brain = new Brain(*other_brain);
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "[CAT] --> " << this->_type << ": " << "MEEOW" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->brain;
}