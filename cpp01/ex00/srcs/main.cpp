#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*z1 = newZombie("HEAP");
	z1->announce();
	ramdomChump("STACK");
	delete z1;
}