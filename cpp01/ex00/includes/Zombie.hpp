#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce();
	void set_name(std::string name);
};

Zombie	*newZombie(std::string name);
void	ramdomChump(std::string name);

#endif

