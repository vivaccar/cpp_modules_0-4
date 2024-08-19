#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define BLUE "\033[34m"
#define RED "\033[31m"
#define RESET "\033[0m"

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce();
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif