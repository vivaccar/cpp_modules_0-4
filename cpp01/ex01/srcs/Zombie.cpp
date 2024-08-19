#include "../includes/Zombie.hpp"

Zombie::Zombie() {
	std::cout << BLUE << "ZOMBIE" << this->name
	<< " CREATED!" << RESET <<std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << BLUE << "ZOMBIE \"" << this->name
	<< "\" CREATED!" << RESET <<std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << this->name << " was destroyed."
	<< RESET << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::setName(std::string name)
{
	this->name = name;
}