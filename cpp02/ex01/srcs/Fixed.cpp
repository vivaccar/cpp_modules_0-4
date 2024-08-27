#include "../includes/Fixed.hpp"

Fixed::Fixed() {
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = (n << Fixed::f_bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)roundf(n * (1 << Fixed::f_bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy Assignment operator called" << std::endl;
	this->fixed_point = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
}

int Fixed::toInt(void) const {
	return (this->fixed_point >> Fixed::f_bits);
}

float Fixed::toFloat(void) const {
    return ((float)this->fixed_point / (float)(1 << Fixed::f_bits));
}

std::ostream& operator<<(std::ostream& ostream, const Fixed& Fixed) {
	ostream << Fixed.toFloat();
	return (ostream); 
}