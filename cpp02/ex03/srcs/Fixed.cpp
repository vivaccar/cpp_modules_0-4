#include "../includes/Fixed.hpp"

// ----------CONSTRUCTORS------------

Fixed::Fixed() {
	this->fixed_point = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int n) {
	//std::cout << "Int constructor called" << std::endl;
	this->fixed_point = (n << Fixed::f_bits);
}

Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called" << std::endl;
	this->fixed_point = (int)roundf(n * (1 << Fixed::f_bits));
}

// ----------DESTRUCTORS------------

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

// ---------- COPY ASSIGNMENT OPERATOR ------------

Fixed& Fixed::operator=(const Fixed& other) {
	//std::cout << "Copy Assignment operator called" << std::endl;
	this->fixed_point = other.getRawBits();
	return (*this);
}

// ----------GETTER E SETTER RAWBITS------------

int Fixed::getRawBits(void) const {
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw) {
	this->fixed_point = raw;
}

// ----------RETURN INT / FLOAT ------------

int Fixed::toInt(void) const {
	return (this->fixed_point >> Fixed::f_bits);
}

float Fixed::toFloat(void) const {
    return ((float)this->fixed_point / (float)(1 << Fixed::f_bits));
}

// ---------- << PRINT FLOAT ------------

std::ostream& operator<<(std::ostream& ostream, const Fixed& Fixed) {
	ostream << Fixed.toFloat();
	return ostream; 
}

// ---------- COMPARISSON OPERATORS ------------

bool Fixed::operator>(const Fixed& other) const {
    return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const {
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const {
    return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const {
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const {
    return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const {
    return (this->getRawBits() != other.getRawBits());
}

// ---------- ARITHMETIC OPERATORS ------------

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed multiplication;

    multiplication.setRawBits(this->getRawBits() * other.getRawBits() >> Fixed::f_bits);
    return (multiplication);
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed division;

    division.setRawBits((this->getRawBits() << Fixed::f_bits) / other.getRawBits());
    return (division);
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed sum;

    sum.setRawBits(this->getRawBits() + other.getRawBits());
    return (sum);
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed decrease;

    decrease.setRawBits(this->getRawBits() - other.getRawBits());
    return (decrease);
}

// ---------- INCREASE/DECREASE OPERATORS ------------

Fixed Fixed::operator++(int) {
    Fixed cur(*this);

    this->setRawBits(this->getRawBits() + 1);
    return (cur);
}

Fixed& Fixed::operator++(void) {
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed cur(*this);

    this->setRawBits(this->getRawBits() - 1);
    return (cur);
}

Fixed& Fixed::operator--(void) {
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

// ---------- MIN/MAX FUNCTION ------------

Fixed& Fixed::min(Fixed &a, Fixed& b) {
    if (a < b)
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed& b) {
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed& b) {
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed& b) {
    if (a < b)
        return (a);
    return (b);
}