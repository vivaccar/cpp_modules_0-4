#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	std::cout << std::endl;

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();

	std::cout << std::endl << std::endl;

	Weapon ak("ak");
	HumanA spider_man("Spider Man", ak);
	HumanB wolverine("wolverine");
	spider_man.attack();
	wolverine.attack();
	wolverine.setWeapon(ak);
	wolverine.attack();

	std::cout << std::endl;
}