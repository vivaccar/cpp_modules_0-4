#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int fixed_point;
		static const int bits = 8;
	
	public:
		//constructor
		Fixed();

		//copy constructor
		Fixed(const Fixed& other);

		//copy assignment operator
		Fixed& operator=(const Fixed& other);
		
		//destructor
		~Fixed();

		//member functions
		int getRawBits(void) const;
		void setRawBits(int const raw);
} ;

#endif