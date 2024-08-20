#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>

#define BLUE "\033[34m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl();
		~Harl();
		void complain(std::string level);
} ;

#endif