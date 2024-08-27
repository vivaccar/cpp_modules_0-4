#include "../includes/Point.hpp"

int main(void)
{
    Point p1(2.25f, 1.5f);

    Point p2(1.2f, 2.2f);

    p1 = p2;
    std::cout << p1.getX() << " " << p1.getY() << std::endl;
    
}