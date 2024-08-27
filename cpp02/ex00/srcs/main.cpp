#include "../includes/Fixed.hpp"

int	main(void)
{

	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

/* 	Fixed a;
	Fixed b(a);
	Fixed c;

	a.setRawBits(2);
	c = a;
	b = c;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl; */
	return 0;
}