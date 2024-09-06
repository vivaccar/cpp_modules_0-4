#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << GREEN << "[WrongCat] Default constructor called" << RESET << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) {
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    this->_type = other._type;
    return (*this);
}

WrongCat::~WrongCat() {
    std::cout << RED << "[WrongCat] Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "[WrongCat] --> " << this->_type << ": " << "MEEOW" << std::endl;
}
