#include "../includes/Brain.hpp"

Brain::Brain() {
    std::cout << GREEN << "Brain Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other) {
    *this = other;
}

Brain::~Brain() {
    std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    for (int i = 0; i < 100; i++)
        this->ideas[0] = other.ideas[0];
    return (*this);
}
