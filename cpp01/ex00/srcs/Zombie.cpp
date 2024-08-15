#include "../includes/Zombie.hpp"


Zombie::Zombie()
{
	std::cout << "CREATED\n";
}

Zombie::~Zombie()
{
	std::cout << this->name << " was destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

Zombie *newZombie(std::string name)
{
	Zombie *z1 = new Zombie();
	z1->set_name(name);
	return z1;
}