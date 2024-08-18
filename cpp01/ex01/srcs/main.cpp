#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(4, "Zumbizao");
	if (horde)
	{
		for (int i = 0; i < 4; i++)
			horde[i].announce();
		delete [] horde;
	}
	std::cout << std::endl << std::endl;
	horde = zombieHorde(12, "Foo");
	if (horde)
	{
		for (int i = 0; i < 12; i++)
			horde[i].announce();
		delete [] horde;
	}
	std::cout << std::endl << std::endl;
	horde = zombieHorde(0, "Ba");
	if (horde)
	{
		for (int i = 0; i < 0; i++)
			horde[i].announce();
		delete [] horde;
	}
}