#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

#define BLUE "\033[34m"
#define RED "\033[31m"
#define RESET "\033[0m"

class HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif