#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

#define BLUE "\033[34m"
#define RED "\033[31m"
#define RESET "\033[0m"

class HumanA {
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif