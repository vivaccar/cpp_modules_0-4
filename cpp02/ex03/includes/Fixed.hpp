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
		
		//  copy operator overload
		Fixed& operator=(const Fixed& other);
		
		//  comparisson operator overloads
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		//  arithmetic operator overloads
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed &other) const;
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed &other) const;
		
		// increase/decrease operator overloads
			
			//post 
		Fixed operator++(int);
		Fixed operator--(int);
			//prev
		Fixed& operator++(void);
		Fixed& operator--(void);

		// getters and setters
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;

		// min & max
		static Fixed& min(Fixed& a, Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
} ;

std::ostream& operator<<(std::ostream& ostream, const Fixed& Fixed);

#endif