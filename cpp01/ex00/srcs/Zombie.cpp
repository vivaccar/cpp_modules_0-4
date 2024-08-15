#include "../includes/Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	this->name = "FOO";
	std::cout << "CREATED\n";
}

Zombie::~Zombie()
{
	std::cout << "DESTROYED\n";
}