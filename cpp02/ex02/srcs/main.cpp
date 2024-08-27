#include "../includes/Fixed.hpp"

int main(void)
{
    {
        Fixed a(2.42f);
        Fixed b(2.43f);

        std::cout << a.getRawBits() << std::endl;

        // Comparisson tests
    
        if (a > b)
            std::cout << "A is bigger" << std::endl;
        if (a < b)
            std::cout << "B is bigger" << std::endl;
        if (a >= b)
            std::cout << "A is bigger or equal" << std::endl;
        if (a <= b)
            std::cout << "B is bigger or equal" << std::endl;
        if (a == b)
            std::cout << "A is equal to B" << std::endl;
        if (a != b)
            std::cout << "A is different to B" << std::endl;
    }
        // Arithmetic tests
    std ::cout << std::endl << std::endl;

    {
        Fixed a(2.4f);
        Fixed b(1.3f);

        Fixed c = a + b;
        std::cout << "Sum: " << c << std::endl;  

        c = a * b;
        std::cout << "Multiplication: " << c << std::endl;
        
        c = a / b;
        std::cout << "Division: " << c << std::endl;  

        c = a - b;
        std::cout << "Decrease: " << c << std::endl;
    }

    std::cout << std::endl;

    // max and min test 
    {
        Fixed a(10);
        Fixed b(9.75f);

        std::cout << "Bigger: " <<Fixed::max(a, b) << std::endl;
        std::cout << "Lower: " <<Fixed::min(a, b) << std::endl;
    }

    std::cout << std::endl;


    {
        Fixed a;
        Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;

        std::cout << b << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max( a, b ) << std::endl;
    }
}