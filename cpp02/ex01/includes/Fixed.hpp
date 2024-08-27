#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int fixed_point;
		static const int f_bits = 8;
	
	public:
		//constructor
		Fixed();
		Fixed(const Fixed& other);
		Fixed(const int n);
		Fixed(const float n);

		//destructors
		~Fixed();
		
		//  copy assignment operator
		Fixed& operator=(const Fixed& other);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
} ;

std::ostream& operator<<(std::ostream& ostream, const Fixed& Fixed);

#endif
