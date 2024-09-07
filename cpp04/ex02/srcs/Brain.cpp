#include "../includes/Brain.hpp"

Brain::Brain() {
    std::cout << GREEN << "Brain Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other) {
    *this = other;
    std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;
}

Brain::~Brain() {
    std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    for (int i = 0; i < 100; i++)
        this->ideas[0] = other.ideas[0];
    return (*this);
}

const std::string& Brain::getIdeas(int index) const {
    if (index > 99 || index < 0)
    {
        static const std::string empty = "";
        return empty;
    }
    return (this->ideas[index]);
}

void Brain::setIdea(int index, std::string idea) {
    if (index > 99 || index < 0)
        return;
    this->ideas[index] = idea;
}

